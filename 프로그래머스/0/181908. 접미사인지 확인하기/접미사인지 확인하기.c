#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int lenl=strlen(my_string), lenr=strlen(is_suffix);
    int r=strcmp(my_string+lenl-lenr,is_suffix)==0?1:0;
    return r;
}