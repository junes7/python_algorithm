#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, len, cnt, rlt, idx, *alpha, *v;
    alpha = (int *)malloc(sizeof(int) * 26);
    v = (int *)malloc(sizeof(int) * 26);
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        memset(alpha, 0, sizeof(int) * 26);
        cnt = 0, rlt = 0, idx = 0;
        len = strlen(st);
        for (int j = 0; j < len; j++)
            alpha[st[j] - 97]++;
        for (int j = 0; j < 26; j++) {
            if (alpha[j]) {
                v[idx++] = alpha[j];
                cnt += 1;
            }
        }
        qsort(v, idx, sizeof(int), cmp);
        for (int j = 0; j < cnt - 2; j++)
            rlt += v[j];
        printf("%d\n", rlt);
    }
    return 0;
}