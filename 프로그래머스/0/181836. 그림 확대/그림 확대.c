#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// picture_len은 배열 picture의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* picture[], size_t picture_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** r=(char**)malloc(sizeof(char*)*(picture_len*k));
    for(int i=0;i<picture_len;i++) {
        for(int t=0;t<k;t++) {
            r[k*i+t]=(char*)malloc(sizeof(char)*(strlen(picture[i])*k+1));
            memset(r[k*i+t],0,sizeof(char)*(strlen(picture[i])*k+1));
            for(int j=0;j<strlen(picture[i]);j++) {
                for(int u=0;u<k;u++) {
                    r[k*i+t][k*j+u]=picture[i][j];
                }
            }
            r[k*i+t][strlen(picture[i])*k]='\0';
        }
    }
    return r;
}