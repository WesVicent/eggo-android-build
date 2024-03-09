#include <jni.h>
#include <string>
#include "NativeLib.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_westemplate_androidCrossNDK_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */) {
    std::string hello = getText();
    return env->NewStringUTF(hello.c_str());
}