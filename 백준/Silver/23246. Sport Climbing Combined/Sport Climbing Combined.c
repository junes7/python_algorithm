#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[1] == b[1] && a[2] == b[2]) return a[0] > b[0];
    if (a[1] == b[1]) return a[2] > b[2];
    return a[1] > b[1];
}
int main(void) {
    int n, idx, m, t, elem, **rank;
    scanf("%d", &n);
    rank = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        rank[i] = (int *)malloc(sizeof(int) * 3);
        scanf("%d", &idx);
        m = 1, t = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &elem);
            m *= elem;
            t += elem;
        }
        rank[i][0] = idx;
        rank[i][1] = m;
        rank[i][2] = t;
    }
    qsort(rank, n, sizeof(int *), cmp);
    for (int i = 0; i < 3; i++)
        printf("%d ", rank[i][0]);
    return 0;
}