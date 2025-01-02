#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(int q, int r, const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* ans=(char*)malloc(sizeof(char)*1001);
    int idx=0;
    for(int i=0;i<strlen(code);i++)
        if(i%q==r)   
            ans[idx++]=code[i];
    ans[idx]='\0';
    ans=(char*)realloc(ans,sizeof(char)*(idx+1));
    return ans;
}