#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// keymap_len은 배열 keymap의 길이입니다.
// targets_len은 배열 targets의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* keymap[], size_t keymap_len, const char* targets[], size_t targets_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*100);
    memset(r,0,sizeof(int)*targets_len);
    int* t=(int*)malloc(sizeof(int)*100);
    int s,idx,minn,idxr=0;
    for(int i=0;i<targets_len;i++) {
        s=0;
        for(int j=0;j<strlen(targets[i]);j++) {
            idx=0;
            for(int k=0;k<keymap_len;k++) {
                for(int m=0;m<strlen(keymap[k]);m++) {
                    if(keymap[k][m]==targets[i][j]) {
                        t[idx++]=m+1;
                        break;
                    }
                }
            }
            minn=100;
            for(int k=0;k<idx;k++) {
                if(minn>t[k])
                    minn=t[k];
            }
            if(minn==100) {
                s=0;
                break;
            } else {
                s+=minn;   
            }
        }
        r[idxr++]=s==0?-1:s;
    }
    return r;
}