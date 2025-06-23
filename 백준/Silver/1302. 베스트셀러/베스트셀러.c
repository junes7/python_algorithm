#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int n, *cnt, idx = 0, maxn = 0, rlt_idx = 0;
    bool flag;
    scanf("%d", &n);
    char **rlt, **name = (char **)malloc(sizeof(char *) * n);
    char *st = (char *)malloc(sizeof(char) * 51);
    cnt = (int *)malloc(sizeof(int) * n);
    memset(cnt, 0, sizeof(int) * n);
    for (int i = 0; i < n; i++)
        name[i] = (char *)malloc(sizeof(char) * 51);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        flag = true;
        if (idx > 0) {
            for (int j = 0; j < idx; j++) {
                if (strcmp(st, name[j]) == 0) {
                    flag = false;
                    cnt[j] += 1;
                    break;
                }
            }
            if (flag) {
                strcpy(name[idx], st);
                cnt[idx++] = 1;
            }
        } else {
            strcpy(name[idx], st);
            cnt[idx++] = 1;
        }
    }
    rlt = (char **)malloc(sizeof(char *) * idx);
    for (int i = 0; i < idx; i++) {
        rlt[i] = (char *)malloc(sizeof(char) * 51);
        if (maxn < cnt[i])
            maxn = cnt[i];
    }
    for (int i = 0; i < idx; i++) {
        if (maxn == cnt[i])
            strcpy(rlt[rlt_idx++], name[i]);
    }
    qsort(rlt, rlt_idx, sizeof(char *), cmp);
    printf("%s", rlt[0]);
    return 0;
}