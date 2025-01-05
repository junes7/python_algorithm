#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=strlen(s),idx=0;
    int* r=(int*)malloc(sizeof(int)*len);
    memset(r,0,sizeof(int)*len);
    char *ch=(char*)malloc(sizeof(char)*(len));
    memset(ch,0,sizeof(char)*(len));
    int cnt[len];
    bool flag;
    for(int i=0;i<len;i++) {
        flag=false;
        for(int j=0;j<idx;j++) {
            if(ch[j]==s[i]) {
                flag=true;
                r[i]=i+1-(cnt[j]);
                cnt[j]=i+1;
                break;
            }
        }
        if(!flag) {
            r[i]=-1;
            ch[idx]=s[i];
            cnt[idx++]=i+1;
        }
    }
    return r;
}