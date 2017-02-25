#include <helloworld.h>
//导入我们需要实现的本地方法
#include "org_lynn_Main.h"
#include <stdio.h>
 JNIEXPORT void JNICALL Java_org_lynn_Main_helloworld
   (JNIEnv *env, jobject obj){
       printf("Hello World cailinfeng!!");
           return;
    }
