#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stlist {
    char st[14];
    int idx;
};
int cmp(const void *pa, const void *pb) {
    struct stlist a = *(struct stlist *)pa;
    struct stlist b = *(struct stlist *)pb;
    return strcmp(a.st, b.st);
}
int main(void) {
    int n, rlt, idx = 1;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        struct stlist *arr = (struct stlist *)malloc(sizeof(struct stlist) * n);
        rlt = 0;
        for (int i = 0; i < n; i++) {
            scanf("%s", arr[i].st);
            arr[i].idx = i;
        }
        qsort(arr, n, sizeof(struct stlist), cmp);
        for (int i = 0; i < n; i++)
            rlt += abs(arr[i].idx - i);
        printf("Site %d: %d\n", idx++, rlt);
    }
    return 0;
}