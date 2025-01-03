#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isEqual(char* num, char * str) {
    int len=strlen(num);
    for(int k=0;k<len;k++) {
        if(num[k]!=str[k]) return 0;
    }
    return 1;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    long long r=0;
    char* num[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int d;
    for(int i=0;numbers[i]!=0;) {
        for(int j=0;j<sizeof(num)/sizeof(char*);j++) {
            if(isEqual(num[j],numbers+i)==1) {
                r=r*10+j;
                d=j;
                break;
            }
        }
        i+=strlen(num[d]);   
    }
    return r;
}