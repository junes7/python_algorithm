#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int l, n, *arr, *ran;
    scanf("%d", &l);
    arr = (int *)malloc(sizeof(int) * l);
    ran = (int *)malloc(sizeof(int) * 2);
    memset(ran, 0, sizeof(int) * 2);
    for (int i = 0; i < l; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &n);
    for (int i = 0; i < l; i++) {
        if (arr[i] == n) {
            printf("%d", 0);
            return 0;
        }
    }
    qsort(arr, l, sizeof(int), cmp);
    for (int i = 0; i < l; i++) {
        if (arr[i] < n)
            ran[0] = arr[i];
        else if (arr[i] > n && ran[1] == 0)
            ran[1] = arr[i];
    }
    ran[0] += 1;
    ran[1] -= 1;
    printf("%d", (n - ran[0]) * (ran[1] - n + 1) + (ran[1] - n));
    return 0;
}