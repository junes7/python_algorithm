#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*4);
    sprintf(r,"%d",age);
    int i=0;
    while(r[i]!=NULL) {
        r[i++]='a'+r[i]-48;
    }
    return r;
}