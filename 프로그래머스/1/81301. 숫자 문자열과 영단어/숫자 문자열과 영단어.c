#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int r=0,idx=0;
    char *num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    char *ptr=(char*)malloc(sizeof(char)*strlen(s)+1);
    for(int i=0;i<strlen(s);) {
        if(isdigit(s[i])!=0) {
            ptr[idx++]=s[i++];
        } else {
            for(int j=0;j<10;j++) {
                if(strstr(s,num[j])!=NULL) {
                    if(s[i]==num[j][0] && s[i+1]==num[j][1]) {
                        ptr[idx++]=j+48;
                        i+=strlen(num[j]);
                        break;
                    }
                }
            }
        }
    }
    ptr[idx]='\0';
    r=atoi(ptr);
    return r;
}