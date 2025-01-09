#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* a, const char* b) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*100000);
    char* temp=(char*)malloc(sizeof(char)*100000),ch;
    int diff=0,ca=0,re=0,idx=0;
    if(strlen(a)<=strlen(b)) {
        diff=strlen(b)-strlen(a);
        for(int i=0;i<diff;i++) {
            temp[i]=0+48;
        }
        strcat(temp,a);
    } else if(strlen(a)>strlen(b)) {
        diff=strlen(a)-strlen(b);
        for(int i=0;i<diff;i++) {
            temp[i]=0+48;
        }
        strcat(temp,b);
    }
    for(int i=strlen(temp)-1;i>=0;i--) {
        if(strlen(a)<=strlen(b)) {
            diff=ca+temp[i]-48+b[i]-48;
            ca=diff>=10?diff/10:0;
            re=diff%10;
            r[idx++]=re+48;
            if(i==0 && ca>0)
                r[idx++]=ca+48;    
        } else if(strlen(a)>strlen(b)) {
            diff=ca+temp[i]-48+a[i]-48;
            ca=diff>=10?diff/10:0;
            re=diff%10;
            r[idx++]=re+48;
            if(i==0 && ca>0)
                r[idx++]=ca+48;
        }
    }
    for(int i=0;i<idx/2;i++) {
        ch=r[i];
        r[i]=r[idx-1-i];
        r[idx-1-i]=ch;
    }
    return r;
}