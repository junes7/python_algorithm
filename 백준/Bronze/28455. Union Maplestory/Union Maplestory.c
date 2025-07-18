#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int n, end, total = 0, abilities = 0, *arr;
    scanf("%d", &n);
    end = n < 42 ? n : 42;
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < end; i++) {
        total += arr[i];
        if (arr[i] >= 250) {
            abilities += 5;
        } else if (arr[i] >= 200) {
            abilities += 4;
        } else if (arr[i] >= 140) {
            abilities += 3;
        } else if (arr[i] >= 100) {
            abilities += 2;
        } else if (arr[i] >= 60) {
            abilities += 1;
        }
    }
    printf("%d %d", total, abilities);
    return 0;
}