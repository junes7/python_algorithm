#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, l, st, cnt = 1, *data;
    scanf("%d %d", &n, &l);
    data = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &data[i]);
    qsort(data, n, sizeof(int), cmp);
    st = data[0];
    for (int i = 1; i < n; i++) {
        if (st <= data[i] && data[i] < st + l)
            continue;
        else {
            st = data[i];
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}