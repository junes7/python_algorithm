#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// keyinput_len은 배열 keyinput의 길이입니다.
// board_len은 배열 board의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* keyinput[], size_t keyinput_len, int board[], size_t board_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*board_len), side[4]={0,0,0,0};
    memset(r,0,sizeof(int)*board_len);
    for(int i=0;i<board_len;i++) {
        side[2*i]=-(board[i]-1)/2;
        side[2*i+1]=(board[i]-1)/2;
    }
    for(int i=0;i<keyinput_len;i++) {
        if(strcmp(keyinput[i],"left")==0) {
            if(r[0]>side[0])
                r[0]-=1;
        } else if(strcmp(keyinput[i],"right")==0) {
            if(r[0]<side[1])
                r[0]+=1;
        } else if(strcmp(keyinput[i],"down")==0) {
            if(r[1]>side[2])
                r[1]-=1;
        } else {
            if(r[1]<side[3])
                r[1]+=1;
        }
    }
    return r;
}