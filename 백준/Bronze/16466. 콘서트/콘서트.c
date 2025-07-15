#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, *arr;
    bool flag = true;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++) {
        if (i + 1 != arr[i]) {
            flag = false;
            printf("%d", i + 1);
            break;
        }
    }
    if (flag) printf("%d", n + 1);
    return 0;
}