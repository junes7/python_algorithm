#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int s, int e) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* r=(char*)malloc(sizeof(char)*(strlen(my_string)+1));
    int idx=0,t=0;
    for(int i=0;i<strlen(my_string);i++) {
        r[idx++]=(i>=s&&i<=e)?my_string[e-t++]:my_string[i];
    }
    r[idx]='\0';
    return r;
}