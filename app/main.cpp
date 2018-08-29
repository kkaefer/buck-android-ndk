#include <jni.h>
#include <android/log.h>

extern "C" JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *) {
    (void)vm;
    __android_log_write(ANDROID_LOG_INFO, "test", "OnLoad");
    return JNI_VERSION_1_6;
}