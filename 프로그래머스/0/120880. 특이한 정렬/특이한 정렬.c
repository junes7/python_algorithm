#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int num;
int compare(const void *pa, const void *pb) {
    const int *a= (const int*)pa;
    const int *b= (const int*)pb;
    if(abs(num-a[0])==abs(num-b[0])) return a[0]<b[0];
    return abs(num-a[0])>abs(num-b[0]);
}

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* r=(int*)malloc(sizeof(int)*numlist_len);
    num=n;
    qsort(numlist,numlist_len,sizeof(int),compare);
    r=numlist;
    return r;
}