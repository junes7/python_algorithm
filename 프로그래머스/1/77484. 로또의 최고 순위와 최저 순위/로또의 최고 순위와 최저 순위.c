#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*2);
    memset(r,0,sizeof(int)*2);
    int zeros=0,matches=0,rank[7]={6,6,5,4,3,2,1};
    for(int i=0;i<lottos_len;i++) {
        if(lottos[i]==0)
            zeros+=1;
        for(int j=0;j<win_nums_len;j++) {
            if(lottos[i]==win_nums[j]) {
                matches+=1;
                break;
            }
        }
    }
    r[0]=rank[zeros+matches];
    r[1]=rank[matches];
    return r;
}