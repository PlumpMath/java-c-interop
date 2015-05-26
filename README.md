### Synopsis
Test code and clang flags (at least on OSX) needed
for writing and compiling a C extension library for a Java program.

### Procedure
  1. First, compile the java program:  
  ```bash
  javac test.java
  ```
  1. Now run the javah program to extract a C header  
  ```bash
  javah test
  ```
  1. Now compile the C relay file:  
  ```bash
  clang -dynamiclib driver.c -L. -lsec -I`/usr/libexec/java_home`/include -I`/usr/libexec/java_home`/include/darwin -o librelay.dylib
  ```
  1. Finally, run the Java test program  
  ```bash
  java test
  ```

### Notes
Your mileage may vary on which directories you need to include to get the jni.h
and related header files. 
