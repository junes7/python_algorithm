#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* r=(char*)malloc(sizeof(char)*4);
    strcpy(r,num%2==0?"Even":"Odd");
    return r;
}