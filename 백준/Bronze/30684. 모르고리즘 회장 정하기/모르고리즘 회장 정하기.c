#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int n, len, idx = 0;
    scanf("%d", &n);
    char *st = (char *)malloc(sizeof(char) * 6);
    char **arr = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
        arr[i] = (char *)malloc(sizeof(char) * 6);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        if (len == 3) {
            strcpy(arr[idx++], st);
        }
    }
    qsort(arr, idx, sizeof(char *), cmp);
    printf("%s", arr[0]);
    return 0;
}