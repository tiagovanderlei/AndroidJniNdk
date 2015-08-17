#include <iostream>
#include <keygenerator.h>
#include <android/log.h>
#include <string.h>
#include <stdio.h>
#include <jni.h>

using namespace std;
KeyGenerator* keygenerator;

extern "C"{
    JNIEXPORT jstring JNICALL Java_br_com_gastecnologia_appndk_Wrapper_generate(JNIEnv* env, jobject obj);
};

JNIEXPORT jstring JNICALL Java_br_com_gastecnologia_appndk_Wrapper_generate(JNIEnv* env, jobject obj){
    std::string result = keygenerator->generate();
    return env->NewStringUTF( result.c_str() );
}