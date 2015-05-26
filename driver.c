#include <jni.h>
#include <stdio.h>

void sec();

JNIEXPORT void JNICALL Java_test_sec (JNIEnv * x, jobject y) {
    printf("Relaying command\n");
    sec();
    return;
}
