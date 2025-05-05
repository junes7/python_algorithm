#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int len, idx;
    char *st = (char *)malloc(sizeof(char) * 1001);
    scanf("%s", st);
    len = strlen(st);
    char *t = (char *)malloc(sizeof(char) * (len + 1));
    char **arr = (char **)malloc(sizeof(char *) * (len + 1));
    for (int i = 0; i < len; i++)
        arr[i] = (char *)malloc(sizeof(char) * 1001);
    for (int i = len - 1; i >= 0; i--) {
        idx = 0;
        memset(t, 0, sizeof(char) * (len + 1));
        for (int j = i; j < len; j++)
            t[idx++] = st[j];
        t[idx] = '\0';
        strcpy(arr[len - 1 - i], t);
    }
    qsort(arr, len, sizeof(char *), compare);
    for (int i = 0; i < len; i++)
        printf("%s\n", arr[i]);
    return 0;
}