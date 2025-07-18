#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, *fork_cnt;
    scanf("%d", &n);
    fork_cnt = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &fork_cnt[i]);
    qsort(fork_cnt, n, sizeof(int), cmp);
    printf("%d", fork_cnt[0] + fork_cnt[1]);
    return 0;
}