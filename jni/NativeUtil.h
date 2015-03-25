/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class NativeUtil */

#ifndef _Included_NativeUtil
#define _Included_NativeUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     NativeUtil
 * Method:    generateAddress
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_bither_utils_NativeUtil_generateAddress
  (JNIEnv *, jclass, jstring);

/*
 * Class:     NativeUtil
 * Method:    getPrivateKey
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_net_bither_utils_NativeUtil_getPrivateKey
  (JNIEnv *, jclass);

/*
 * Class:     NativeUtil
 * Method:    getProgress
 * Signature: ()[D
 */
JNIEXPORT jdoubleArray JNICALL Java_net_bither_utils_NativeUtil_getProgress
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
