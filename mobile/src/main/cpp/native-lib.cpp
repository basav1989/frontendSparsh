#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_rayappa_basavaraj_sparshnirvana_Home_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
