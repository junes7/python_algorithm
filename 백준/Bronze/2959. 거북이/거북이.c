#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 4, sizeof(int), cmp);
    printf("%d", arr[0] * arr[2]);
    return 0;
}