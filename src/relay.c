//
// @brief   Relay library to interface between JNI and the compiled C 
//          library we're after.
//
// The purpose of this library is to act as an escrow between the Java program
// and the native library to avoid having to open up the native library to 
// add JNI support directly to it.
//
#include <jni.h>
#include <stdio.h>

void sec();

// JNI prototype. This method simply forwards calls to the 'real' sec() in 
// libsec
JNIEXPORT void JNICALL Java_Driver_sec (JNIEnv * x, jobject y) {
    printf("Relaying command\n");
    sec();
    return;
}
