#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, elem, *arr;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    elem = arr[0];
    printf("%d\n", arr[0]);
    for (int i = 1; i < n; i++) {
        if (arr[i] != elem) {
            elem = arr[i];
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}