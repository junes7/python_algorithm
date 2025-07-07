#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    int lena, lenb;
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    lena = strlen(a), lenb = strlen(b);
    if (lena == lenb) return strcmp(a, b);
    return lena > lenb;
}
int main(void) {
    int n, len, rlt;
    scanf("%d", &n);
    char *st = (char *)malloc(sizeof(char) * 51);
    char **arr = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(sizeof(char) * 51);
        scanf("%s", arr[i]);
    }
    rlt = n;
    qsort(arr, n, sizeof(char *), cmp);
    for (int i = 0; i < n; i++) {
        len = strlen(arr[i]);
        for (int j = i + 1; j < n; j++) {
            strncpy(st, arr[j], len);
            st[len] = '\0';
            if (strcmp(arr[i], st) == 0) {
                rlt -= 1;
                break;
            }
        }
    }
    printf("%d", rlt);
    return 0;
}