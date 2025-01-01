#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b-*(int*)a;
}

// emergency_len은 배열 emergency의 길이입니다.
int* solution(int emergency[], size_t emergency_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*emergency_len);
    for(int i=0;i<emergency_len;i++)
        r[i]=emergency[i];
    qsort(r,emergency_len,sizeof(int),compare);
    for(int i=0;i<emergency_len;i++) {
        for(int j=0;j<emergency_len;j++) {
            if(emergency[i]==r[j]) {
                emergency[i]=j+1;
                break;
            }
        }
    }
    r=emergency;
    return r;
}