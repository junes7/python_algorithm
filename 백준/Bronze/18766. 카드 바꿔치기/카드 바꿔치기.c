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
    int t, n;
    char **gram_before, **gram_after;
    bool flag;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        gram_before = (char **)malloc(sizeof(char *) * n);
        gram_after = (char **)malloc(sizeof(char *) * n);
        for (int i = 0; i < n; i++) {
            gram_before[i] = (char *)malloc(sizeof(char) * 3);
            scanf("%s", gram_before[i]);
        }
        for (int i = 0; i < n; i++) {
            gram_after[i] = (char *)malloc(sizeof(char) * 3);
            scanf("%s", gram_after[i]);
        }
        qsort(gram_before, n, sizeof(char *), cmp);
        qsort(gram_after, n, sizeof(char *), cmp);
        flag = true;
        for (int i = 0; i < n; i++) {
            if (strcmp(gram_before[i], gram_after[i]) != 0) {
                flag = false;
                break;
            }
        }
        printf("%s\n", !flag ? "CHEATER" : "NOT CHEATER");
    }
    return 0;
}