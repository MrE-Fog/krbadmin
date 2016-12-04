/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class pl_memleak_krblib_Kadm5 */

#ifndef _Included_pl_memleak_krblib_Kadm5
#define _Included_pl_memleak_krblib_Kadm5
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeInitContext
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_pl_memleak_krblib_Kadm5_nativeInitContext
  (JNIEnv *, jobject);

/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeFreeContext
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_pl_memleak_krblib_Kadm5_nativeFreeContext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeFreeHandle
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_pl_memleak_krblib_Kadm5_nativeFreeHandle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeInitWithSKey
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_pl_memleak_krblib_Kadm5_nativeInitWithSKey
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeGetRealm
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_pl_memleak_krblib_Kadm5_nativeGetRealm
  (JNIEnv *, jobject, jlong);

/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeAddPrincipal
 * Signature: (JJLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pl_memleak_krblib_Kadm5_nativeAddPrincipal
  (JNIEnv *, jobject, jlong, jlong, jstring, jstring);

/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeDeletePrincipal
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pl_memleak_krblib_Kadm5_nativeDeletePrincipal
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     pl_memleak_krblib_Kadm5
 * Method:    nativeChangePassword
 * Signature: (JJLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pl_memleak_krblib_Kadm5_nativeChangePassword
  (JNIEnv *, jobject, jlong, jlong, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
