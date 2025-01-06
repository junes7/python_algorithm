#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    // 나머지가 0일 때 FRIDAY부터 시작
    char* r=(char*)malloc(sizeof(char)*3+1);
    int month[12]={31,29,31,30,31,30,31,31,30,31,30,31},sum=4;
    char date[7][3]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for(int i=0;i<a-1;i++) {
        sum+=month[i];
    }
    for(int i=0;i<3;i++) {
        r[i]=date[(sum+b)%7][i];
    }
    r[3]='\0';
    return r;
}