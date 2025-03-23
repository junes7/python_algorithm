#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 4, sizeof(int), compare);
    printf("%d", 1 + arr[1] + arr[2] + arr[3]);
    return 0;
}