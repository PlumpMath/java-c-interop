//
// @brief   POC implementation of an exported function to be called from a
//          Java program using the JNI
//
#include <stdio.h>

// This is the method that will be called via librelay
void sec() {
    printf("We are inside a native method call here\n");
}
