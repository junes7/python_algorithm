#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char a = *(char *)pa;
    const char b = *(char *)pb;
    return a - b;
}
int main(void) {
    int len;
    char *a, *b, *rlt;
    a = (char *)malloc(sizeof(char) * 101);
    b = (char *)malloc(sizeof(char) * 101);
    rlt = (char *)malloc(sizeof(char) * 201);
    memset(rlt, 0, sizeof(char) * 201);
    scanf("%s", a);
    scanf("%s", b);
    strcat(rlt, a);
    strcat(rlt, b);
    len = strlen(rlt);
    qsort(rlt, len, sizeof(char), cmp);
    printf("%s\n", rlt);
    return 0;
}