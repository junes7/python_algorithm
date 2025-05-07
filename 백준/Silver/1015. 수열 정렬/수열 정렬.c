#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, t, *arr, *arr_cpy;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    arr_cpy = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr_cpy[i] = arr[i];
    }
    qsort(arr_cpy, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr_cpy[j] == arr[i]) {
                t = j;
                arr_cpy[t] = -1;
                printf("%d ", t);
                break;
            }
        }
    }
    return 0;
}