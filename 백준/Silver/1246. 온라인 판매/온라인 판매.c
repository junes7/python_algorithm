#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, m, cnt, total, rlt = 0, a = 0, *arr;
    scanf("%d %d", &n, &m);
    arr = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr[i]);
    qsort(arr, m, sizeof(int), cmp);
    for (int i = 0; i < m; i++) {
        cnt = m - i;
        total = (n <= cnt ? n : cnt) * arr[i];
        if (rlt < total) {
            rlt = total;
            a = arr[i];
        }
    }
    printf("%d %d", a, rlt);
    return 0;
}