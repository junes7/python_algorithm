#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int r=0,st=0,len,lenp;
    char pron[4][4]={"aya","ye","woo","ma"},temp[16];
    bool flag;
    for(int i=0;i<babbling_len;i++) {
        memset(temp,0,sizeof(char)*16);
        len=strlen(babbling[i]);
        strcpy(temp,babbling[i]);
        temp[len]='\0';
        flag=true;
        for(int j=0;j<4;j++) {
            lenp=strlen(pron[j]);
            if(strstr(temp,pron[j])!=NULL) {
                for(int k=0;k<len;k++) {
                    if(temp[k]==pron[j][0] && temp[k+lenp-1]==pron[j][lenp-1]) {
                        st=k;
                        break;
                    }
                }
                for(int k=st;k<st+strlen(pron[j]);k++) {
                    temp[k]=32;
                }
            }  
        }
        printf("final temp: %s %d\n",temp,strlen(temp));
        
        for(int k=0;k<len;k++) {
            if(isalpha(temp[k])) {
                flag=false;
                break;
            }
        }
        if(flag)
            r+=1;
    }
    return r;
}