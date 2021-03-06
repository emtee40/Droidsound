#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <android/log.h>
#include "com_ssb_droidsound_plugins_VGMStreamPlugin.h"

extern "C"
{
#include "vgmstream/vgmstream.h"
}

int total_samples = 0;

bool force_loop = false;
double loop_count = 2.0f;

int channels;
int samplerate = 0;

#define INFO_LENGTH 2
#define INFO_FREQUENCY 11
#define INFO_CHANNELS 12

JNIEXPORT jlong JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1loadFile(JNIEnv *env, jobject obj, jstring fname, jboolean loopmode)
{
    VGMSTREAM * vgmStream = NULL;
	STREAMFILE * vgmFile = NULL;

	force_loop = false;
	
	if (loopmode)
	{
		force_loop = true;
		__android_log_print(ANDROID_LOG_VERBOSE, "VGMStreamPlugin", "Force Loop"); 
	}
		
    jboolean iscopy;
    const char *s = env->GetStringUTFChars(fname, &iscopy);
	
	vgmFile = open_stdio_streamfile(s);
	if (vgmFile == NULL)
	{
		return 0;
	}

	vgmStream = init_vgmstream_from_STREAMFILE(vgmFile);
    
	env->ReleaseStringUTFChars(fname, s);
    if (!vgmStream)
    {
        return 0;
    }
	
    if (vgmStream->channels <= 0)
    {
        close_vgmstream(vgmStream);
        vgmStream = NULL;
        return 0;
    }
    
	total_samples = get_vgmstream_play_samples(loop_count, 0.0f, 0.0f, vgmStream);
	close_streamfile(vgmFile);
	__android_log_print(ANDROID_LOG_VERBOSE, "VGMStreamPlugin", "Initialized"); 
    return (long)vgmStream;
}


JNIEXPORT void Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1unload(JNIEnv *env, jobject obj, jlong song)
{
    VGMSTREAM* vgm = (VGMSTREAM*)song;
	if (vgm != NULL)
	{
		close_vgmstream(vgm);
	}
    vgm = NULL;
	return;
}


JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1getSoundData(JNIEnv *env, jobject obj, jlong song, jshortArray sArray, jint size)
{
    VGMSTREAM* vgm = (VGMSTREAM*)song;
	
    jshort *ptr = env->GetShortArrayElements(sArray, NULL);

	if (total_samples - (size / vgm->channels) < 0)
    {
        size = total_samples * vgm->channels;
    }

	render_vgmstream(ptr, size / vgm->channels, vgm);
	env->ReleaseShortArrayElements(sArray, ptr, 0);

	// stupid hack to 
	if (!force_loop)
		total_samples -= size / vgm->channels;
	
	if (size <= 0)
	{
		__android_log_print(ANDROID_LOG_VERBOSE, "VGMStreamPlugin", "Samples ended"); 
		return -1;
	}

    return size;
}

JNIEXPORT jstring JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1getStringInfo(JNIEnv *env, jobject obj, jlong song, jint what)
{
   
    return 0;
}

JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_VGMStreamPlugin_N_1getIntInfo(JNIEnv *env, jobject obj, jlong song, jint what)
{
    VGMSTREAM *vgm = (VGMSTREAM*)song;
    
    switch(what)
    {
        case INFO_LENGTH:
        {
            int length_in_ms = get_vgmstream_play_samples(loop_count, 0.0f, 0.0f, vgm) * 1000LL / vgm->sample_rate;
            return length_in_ms;
        }

		case INFO_FREQUENCY:
		{
			return vgm->sample_rate;
		}

		case INFO_CHANNELS:
		{
			return vgm->channels;
		}
		
    }
    return -1;
}
