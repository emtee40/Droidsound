/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ssb_droidsound_utils_UnRar */

#ifndef _Included_com_ssb_droidsound_utils_UnRar
#define _Included_com_ssb_droidsound_utils_UnRar
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ssb_droidsound_utils_UnRar
 * Method:    N_extractAll
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_UnRar_N_1extractAll
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_ssb_droidsound_utils_UnRar
 * Method:    N_open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_UnRar_N_1open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_ssb_droidsound_utils_UnRar
 * Method:    N_skip
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_UnRar_N_1skip
  (JNIEnv *, jobject);

/*
 * Class:     com_ssb_droidsound_utils_UnRar
 * Method:    N_extract
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_UnRar_N_1extract
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_ssb_droidsound_utils_UnRar
 * Method:    N_getFileName
 * Signature: ()I
 */
JNIEXPORT jstring JNICALL Java_com_ssb_droidsound_utils_UnRar_N_1getFileName
  (JNIEnv *, jobject);

/*
 * Class:     com_ssb_droidsound_utils_UnRar
 * Method:    N_getFileSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_UnRar_N_1getFileSize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
