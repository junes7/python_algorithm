#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 7);
    for (int i = 0; i < 7; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 7, sizeof(int), cmp);
    printf("%d %d %d", arr[0], arr[1], arr[6] - arr[0] - arr[1]);
    return 0;
}