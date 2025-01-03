#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// spell_len은 배열 spell의 길이입니다.
// dic_len은 배열 dic의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int r=2;
    bool flag;
    for(int i=0;i<dic_len;i++) {
        flag=true;
        for(int j=0;j<spell_len;j++) {
            if(strstr(dic[i],spell[j])==NULL) {
                flag=false;
                break;
            }
        }
        if(flag)
            r/=2;
    }
    return r;
}