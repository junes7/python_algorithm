#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int n, idx = 1;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        char **arr = (char **)malloc(sizeof(char *) * (n + 1));
        for (int i = 0; i < n + 1; i++) {
            arr[i] = (char *)malloc(sizeof(char) * 251);
            gets(arr[i]);
        }
        qsort(arr, n + 1, sizeof(char *), cmp);
        printf("%d\n", idx++);
        for (int i = 1; i < n + 1; i++)
            printf("%s\n", arr[i]);
    }
    return 0;
}