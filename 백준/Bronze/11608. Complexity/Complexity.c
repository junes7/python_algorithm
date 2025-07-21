#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 101);
    int len, idx = 0, cnt = 0, rlt = 0, *alpha, *v;
    scanf("%s", st);
    len = strlen(st);
    alpha = (int *)malloc(sizeof(int) * 26);
    memset(alpha, 0, sizeof(int) * 26);
    v = (int *)malloc(sizeof(int) * 26);
    for (int i = 0; i < len; i++)
        alpha[st[i] - 97]++;
    for (int i = 0; i < 26; i++) {
        if (alpha[i]) {
            v[idx++] = alpha[i];
            cnt += 1;
        }
    }
    qsort(v, idx, sizeof(int), cmp);
    for (int i = 0; i < cnt - 2; i++)
        rlt += v[i];
    printf("%d", rlt);
    return 0;
}