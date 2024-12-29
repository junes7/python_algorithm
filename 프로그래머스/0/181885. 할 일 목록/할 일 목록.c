#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// todo_list_len은 배열 todo_list의 길이입니다.
// finished_len은 배열 finished의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** r=(char**)malloc(sizeof(char*)*finished_len);
    int cnt=0;
    for(int i=0;i<finished_len;i++) {
        if(finished[i]==false) {
            r[cnt]=(char*)malloc(sizeof(char)*strlen(todo_list[i]));
            strcpy(r[cnt++],todo_list[i]);
        }
    }
    return r;
}