#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*food_len*1000);
    char* t=(char*)malloc(sizeof(char)*food_len*500);
    int idxt=0;
    for(int i=1;i<food_len;i++) {
        for(int j=0;j<food[i]/2;j++) {
            t[idxt++]=i+48;
        }
    }
    t[idxt]='\0';
    strcpy(r,t);
    r[idxt++]='0';
    for(int i=strlen(t)-1;i>=0;i--) {
        r[idxt++]=t[i];
    }
    r[idxt]='\0';
    return r;
}