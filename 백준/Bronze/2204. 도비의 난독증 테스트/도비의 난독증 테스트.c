#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    int lena = strlen(a), lenb = strlen(b);
    char st1[lena], st2[lenb];
    strcpy(st1, a);
    strcpy(st2, b);
    for (int i = 0; i < lena; i++) {
        if (isupper(st1[i])) {
            st1[i] = tolower(st1[i]);
        }
    }
    for (int i = 0; i < lenb; i++) {
        if (isupper(st2[i])) {
            st2[i] = tolower(st2[i]);
        }
    }
    return strcmp(st1, st2);
}
int main(void) {
    int n;
    char **arr;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        arr = (char **)malloc(sizeof(char *) * n);
        for (int i = 0; i < n; i++) {
            arr[i] = (char *)malloc(sizeof(char) * 21);
            scanf("%s", arr[i]);
        }
        qsort(arr, n, sizeof(char *), cmp);
        printf("%s\n", arr[0]);
    }
    return 0;
}