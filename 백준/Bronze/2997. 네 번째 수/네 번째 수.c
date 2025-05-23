#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int diff1, diff2, *arr = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 3, sizeof(int), cmp);
    diff1 = arr[1] - arr[0];
    diff2 = arr[2] - arr[1];
    if (diff1 == diff2) {
        printf("%d", arr[2] * 2 - arr[1]);
    } else if (diff1 > diff2) {
        printf("%d", arr[1] * 2 - arr[2]);
    } else {
        printf("%d", arr[1] * 2 - arr[0]);
    }
    return 0;
}