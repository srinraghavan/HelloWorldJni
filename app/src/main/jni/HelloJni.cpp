/* DO NOT EDIT THIS FILE - it is machine generated */
#include <hmwk1_cis350_helloworld_MainActivity.h>
#include <stdio.h>
#include <android/log.h>

/*
 * Class:     hmwk1_cis350_helloworld_MainActivity
 * Method:    HelloJni
 * Signature: ()Ljava/lang/String;
 */

int print(){
    return  42;
    //__android_log_print(ANDROID_LOG_DEBUG, "LOG_TAG", "\n this is log messge \n");
}


JNIEXPORT jstring JNICALL Java_hmwk1_cis350_helloworld_MainActivity_HelloJni
  (JNIEnv * env, jobject object){
    //return print();
    return env->NewStringUTF("Hello from native code! lol");


}

