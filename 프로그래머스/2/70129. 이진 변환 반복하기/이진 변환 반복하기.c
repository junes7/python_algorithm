#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*2);
    memset(r,0,sizeof(int)*2);
    char* ch=(char*)malloc(sizeof(char)*strlen(s)+1);
    strcpy(ch,s);
    int zcnt=0,n=0,idx=strlen(s);
    while(strlen(ch)>1) {
        r[0]+=1;
        for(int i=0;i<strlen(ch);i++) {
            if(ch[i]=='1') {
                zcnt+=1;
            }
        }
        memset(ch,0,sizeof(char)*strlen(s)+1);
        r[1]+=idx-zcnt;
        idx=0;
        while(zcnt>0) {
            ch[idx++]=(zcnt%2)+48;
            zcnt/=2;
        }
        ch[idx]='\0';
    }
    return r;
}