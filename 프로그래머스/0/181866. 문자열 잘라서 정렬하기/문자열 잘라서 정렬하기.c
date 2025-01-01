#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void *b) {
    return strcmp(*(char**)a,*(char**)b);
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** r=(char**)malloc(sizeof(char*)*strlen(myString));
    char* temp;
    int idx=0;
    for(int i=0;i<strlen(myString);i++)
        r[i]=(char*)malloc(sizeof(char)*strlen(myString));
    temp=strtok(myString,"x");
    while(temp!=NULL) {
        strcpy(r[idx++],temp);
        temp=strtok(NULL,"x");
    }
    qsort(r,idx,sizeof(char*),compare);
    return r;
}