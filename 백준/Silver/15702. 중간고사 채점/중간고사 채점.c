#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[1] == b[1]) return a[0] > b[0];
    return a[1] < b[1];
}
int main(void) {
    int n, m, t, idx, *scr, **rlt;
    char ch[2];
    scanf("%d %d", &n, &m);
    scr = (int *)malloc(sizeof(int) * n);
    rlt = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < n; i++)
        scanf("%d", &scr[i]);
    for (int i = 0; i < m; i++) {
        rlt[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d", &idx);
        t = 0;
        for (int j = 0; j < n; j++) {
            scanf("%s", ch);
            t += (strcmp(ch, "O") == 0 ? 1 : 0) * scr[j];
        }
        rlt[i][0] = idx;
        rlt[i][1] = t;
    }
    qsort(rlt, m, sizeof(int *), cmp);
    printf("%d %d", rlt[0][0], rlt[0][1]);
    return 0;
}