#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char a = *(char *)pa;
    const char b = *(char *)pb;
    return a - b;
}
int main(void) {
    int len, idx;
    char *st = (char *)malloc(sizeof(char) * 2001);
    char *st_copy = (char *)malloc(sizeof(char) * 2001);
    scanf("%s", st);
    len = strlen(st);
    strcpy(st_copy, st);
    qsort(st_copy, len, sizeof(char), cmp);
    for (int i = 0; i < len; i++) {
        if (st[i] == st_copy[0])
            idx = i;
    }
    printf("%d", idx);
    return 0;
}