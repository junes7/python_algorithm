#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* ineq, const char* eq, int n, int m) {
    // int r=*ineq=='<'?*eq=='='?n<=m:n<m:*eq=='='?n>=m:n>m;
    int r=!strcmp(ineq,"<")?!strcmp(eq,"=")?n<=m:n<m:!strcmp(eq,"=")?n>=m:n>m;
    return r;
}