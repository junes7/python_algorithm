#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, elem, idx = 0, *arr;
    bool flag;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        flag = true;
        for (int j = 0; j < idx; j++) {
            if (arr[j] == elem) {
                flag = false;
                break;
            }
        }
        if (flag)
            arr[idx++] = elem;
    }
    qsort(arr, idx, sizeof(int), cmp);
    for (int i = 0; i < idx; i++)
        printf("%d ", arr[i]);
    return 0;
}