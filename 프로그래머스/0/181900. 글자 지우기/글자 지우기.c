#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a-*(int*)b;   
}

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*(strlen(my_string)-indices_len+1));
    qsort(indices,indices_len,sizeof(int),compare);
    bool flag;
    int idx=0;
    for(int i=0;i<strlen(my_string);i++) {
        flag=true;
        for(int j=0;j<indices_len;j++) {
            if(i==indices[j]) {
                flag=false;
                break;
            }
        }
        if(flag)
            r[idx++]=my_string[i];
    }
    r[idx]='\0';
    return r;
}