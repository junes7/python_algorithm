#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* temp="수박";
    int len=strlen(temp);
    char* r=(char*)malloc(sizeof(char)*(n*len/2+1));
    memset(r,0,sizeof(char)*(n*len/2+1));
    // method1 for loop
    // for(int i=0;i<n*len/2;i++)
    //    r[i]=temp[i%len];
    // r[n*len/2]='\0';
    // method2 use strcat(string concatenate) function
    for(int i=0;i<n;i++)
        strcat(r,i%2==0?"수":"박");
    r[n*len/2]='\0';
    return r;
}