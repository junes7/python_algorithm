#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* polynomial) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*strlen(polynomial));
    memset(r,0,sizeof(char)*strlen(polynomial));
    char* temp=strtok(polynomial," ");
    char *ch=(char*)malloc(sizeof(char)*4);
    int a=0,b=0,idx;
    while(temp!=NULL) {
        if(temp!="+") {
            idx=0;
            memset(ch,0,sizeof(char)*4);
            if(strstr(temp,"x")!=NULL) {
                strncpy(ch,temp,strlen(temp)-1);
                a+=strlen(ch)>0?atoi(ch):1;
            } else {
                b+=atoi(temp);
            }
        }
        temp=strtok(NULL," ");
    }
    if(a==0) {
        sprintf(r,"%d",b);
    } else {
        if(a>1)
            sprintf(r,b==0?"%dx":"%dx + %d",a,b);
        else
            sprintf(r,b==0?"x":"x + %d",b);
    }
    return r;
}