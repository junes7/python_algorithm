#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[1] == b[1]) return a[0] - b[0];
    return a[1] - b[1];
}
int main(void) {
    int n, m, k, a, b, s;
    scanf("%d %d %d", &n, &m, &k);
    int **rlt = (int **)malloc(sizeof(int *) * k);

    for (int i = 0; i < k; i++) {
        rlt[i] = (int *)malloc(sizeof(int) * 2);
        s = 0;
        scanf("%d %d", &a, &b);
        s += m + 1 - b;
        if (a > 1)
            s += a - 1;
        rlt[i][0] = i + 1;
        rlt[i][1] = s;
    }
    qsort(rlt, k, sizeof(int *), compare);
    printf("%d", rlt[0][0]);
    return 0;
}