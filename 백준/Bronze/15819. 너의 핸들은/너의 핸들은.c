#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int n, idx;
    scanf("%d %d", &n, &idx);
    char **arr = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(sizeof(char) * 21);
        scanf("%s", arr[i]);
    }
    qsort(arr, n, sizeof(char *), cmp);
    printf("%s", arr[idx - 1]);
    return 0;
}