#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, rlt = 0,*arr=(int*)malloc(sizeof(int)*5);
    memset(arr,0,sizeof(int)*5);
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
        scanf("%d",&arr[i]);
    rlt += arr[0] > arr[2] ? (arr[0] - arr[2]) * 508 : (arr[2] - arr[0]) * 108;
    rlt += arr[1] > arr[3] ? (arr[1] - arr[3]) * 212 : (arr[3] - arr[1]) * 305;
    if (arr[4] > 0)
        rlt += arr[4] * 707;
    rlt *= 4763;
    printf("%d",rlt);
    return 0;
}