all: javafiles native

javafiles:
	javac Driver.java
	mv *.class ../bin

native: javafiles
	clang -dynamiclib sec.c -o libsec.dylib
	clang -dynamiclib relay.c \
	-L. \
	-lsec \
	-I`/usr/libexec/java_home`/include \
	-I`/usr/libexec/java_home`/include/darwin \
	-o librelay.dylib
	mv *.dylib ../bin
