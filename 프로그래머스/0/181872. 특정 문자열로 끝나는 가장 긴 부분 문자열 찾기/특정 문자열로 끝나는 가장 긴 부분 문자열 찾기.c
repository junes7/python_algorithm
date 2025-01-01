#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString, const char* pat) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*2000);
    int idx=0,end=0;
    for(int i=strlen(myString)-1;i>=0;i--) {
        if(myString[i]==pat[strlen(pat)-1]) {
            end=i;
            break;
        }
    }
    for(int i=0;i<=end;i++)
        r[idx++]=myString[i];
    r[idx]='\0';
    r=(char*)realloc(r,sizeof(char)*idx);
    return r;
}