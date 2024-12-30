#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*strlen(myString));
    int start=0,idx=0;
    for(int i=0;i<strlen(myString);i++) {
        if(myString[i]=='x') {
            r[idx++]=i-start;
            start=i+1;
        }
    }
    r[idx]=strlen(myString)-start;
    return r;
}