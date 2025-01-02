#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_str, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** r=(char**)malloc(sizeof(char*)*101);
    int l=strlen(my_str),len=l%n==0?l/n:l/n+1,cnt=0;
    for(int i=0;i<len;i++) {
        r[i]=(char*)malloc(sizeof(char)*(n+1));
        cnt=0;
        for(int j=n*i;j<n*i+n;j++)
            r[i][cnt++]=my_str[j];
        r[i][cnt]='\0';
    }
    return r;
}