#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, *pay, *rlt, *mlist;
    scanf("%d %d", &n, &m);
    pay = (int*)malloc(sizeof(int) * n);
    rlt = (int*)malloc(sizeof(int) * (n + m));
    mlist = (int*)malloc(sizeof(int) * (n + m));
    for (int i = 0; i < n; i++) {
        scanf("%d", &pay[i]);
        rlt[i] = pay[i];
    }
    for (int i = n; i < n + m; i++)
        rlt[i] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + m; j++) {
            scanf("%d", &mlist[j]);
            rlt[i] -= mlist[j];
            rlt[j] += mlist[j];
        }
    }
    for (int i = 0; i < n + m; i++)
        printf("%d ", rlt[i]);
    return 0;
}