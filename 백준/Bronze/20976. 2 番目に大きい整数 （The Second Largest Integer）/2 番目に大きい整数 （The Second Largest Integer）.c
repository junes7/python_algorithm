#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 3, sizeof(int), compare);
    printf("%d", arr[1]);
    return 0;
}