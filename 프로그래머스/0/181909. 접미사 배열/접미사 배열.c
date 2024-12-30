#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int l=strlen(my_string);
    char* t;
    char** r=(char**)malloc(sizeof(char*)*l);
    for(int i=0;i<l;i++) {
        r[i]=(char*)malloc(sizeof(char)*(l+1));
        for(int j=l-1-i;j<l;j++)
            r[i][j-(l-1-i)]=my_string[j];
        r[i][i+1]='\0';
    }
    for(int i=0;i<l-1;i++) {
        for(int j=i+1;j<l;j++) {
            if(strcmp(r[i],r[j])>0) {
                t=r[i];
                r[i]=r[j];
                r[j]=t;
            }
        }
    }
    return r;
}