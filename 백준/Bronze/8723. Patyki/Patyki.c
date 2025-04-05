#include <math.h>
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
    if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) {
        printf("%d", 1);
    } else {
        printf("%d", arr[0] == arr[1] && arr[1] == arr[2] ? 2 : 0);
    }
    return 0;
}