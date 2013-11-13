/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ssb_droidsound_plugins_SexyPSFPlugin */

#ifndef _Included_com_ssb_droidsound_plugins_SexyPSFPlugin
#define _Included_com_ssb_droidsound_plugins_SexyPSFPlugin
#ifdef __cplusplus
extern "C" {
#endif
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_TITLE
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_TITLE 0L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_AUTHOR
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_AUTHOR 1L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_LENGTH
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_LENGTH 2L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_TYPE
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_TYPE 3L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_COPYRIGHT
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_COPYRIGHT 4L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_GAME
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_GAME 5L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_COUNT
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_COUNT 6L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_STARTTUNE
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_STARTTUNE 7L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_TITLE
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_TITLE 8L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_AUTHOR
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_AUTHOR 9L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_NO
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_SUBTUNE_NO 10L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_DETAILS_CHANGED
#define com_ssb_droidsound_plugins_SexyPSFPlugin_INFO_DETAILS_CHANGED 15L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_FILTER
#define com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_FILTER 1L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_RESAMPLING
#define com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_RESAMPLING 2L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_NTSC
#define com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_NTSC 3L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_SPEED_HACK
#define com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_SPEED_HACK 4L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_PANNING
#define com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_PANNING 5L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_FILTER_BIAS
#define com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_FILTER_BIAS 6L
#undef com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_SID_MODEL
#define com_ssb_droidsound_plugins_SexyPSFPlugin_OPT_SID_MODEL 7L
/*
 * Class:     com_ssb_droidsound_plugins_SexyPSFPlugin
 * Method:    N_load
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_ssb_droidsound_plugins_SexyPSFPlugin_N_1load
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_ssb_droidsound_plugins_SexyPSFPlugin
 * Method:    N_unload
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ssb_droidsound_plugins_SexyPSFPlugin_N_1unload
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ssb_droidsound_plugins_SexyPSFPlugin
 * Method:    N_getSoundData
 * Signature: (J[SI)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_SexyPSFPlugin_N_1getSoundData
  (JNIEnv *, jobject, jlong, jshortArray, jint);

/*
 * Class:     com_ssb_droidsound_plugins_SexyPSFPlugin
 * Method:    N_getStringInfo
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ssb_droidsound_plugins_SexyPSFPlugin_N_1getStringInfo
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ssb_droidsound_plugins_SexyPSFPlugin
 * Method:    N_getIntInfo
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_plugins_SexyPSFPlugin_N_1getIntInfo
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
