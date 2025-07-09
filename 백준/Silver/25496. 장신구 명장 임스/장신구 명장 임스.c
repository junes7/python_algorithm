#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a=*(int*)pa;
    const int b=*(int*)pb;
    return a>b;
}
int main(void) {
    int p, n, cnt = 0,*arr;
    scanf("%d %d",&p,&n);
    arr=(int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),cmp);
    for (int i = 0; i < n; i++) {
        if (p >= 200) break;
        p += arr[i];
        cnt += 1;
    }
    printf("%d",cnt);
    return 0;
}