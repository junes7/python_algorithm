#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char a = *(char *)pa;
    const char b = *(char *)pb;
    return b - a;
}
int main(void) {
    int len;
    char *st = (char *)malloc(sizeof(char) * 7);
    scanf("%s", st);
    len = strlen(st);
    qsort(st, len, sizeof(char), cmp);
    printf("%s", st);
    return 0;
}