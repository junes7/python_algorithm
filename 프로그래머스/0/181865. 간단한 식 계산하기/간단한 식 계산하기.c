#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* binomial) {
    int r=0;
    int* num=(int*)malloc(sizeof(int)*2);
    char* temp, op;
    temp=strtok(binomial," ");
    while(temp!=NULL) {
        if(isdigit(temp[0]))
            num[r++]=atoi(temp);
        else
            op=temp[0];
        temp=strtok(NULL," ");
    }
    r=op=='+'?num[0]+num[1]:op=='-'?num[0]-num[1]:num[0]*num[1];
    return r;
}