#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const char a = *(char *)pa;
    const char b = *(char *)pb;
    return a - b;
}
int main(void) {
    char *a = (char *)malloc(sizeof(char) * 1001);
    char *b = (char *)malloc(sizeof(char) * 1001);
    int i = 1, *len = (int *)malloc(sizeof(int) * 2);
    while (1) {
        scanf("%s %s", a, b);
        if (strcmp(a, "END") == 0 && strcmp(b, "END") == 0) break;
        len[0] = strlen(a), len[1] = strlen(b);
        qsort(a, len[0], sizeof(char), cmp);
        qsort(b, len[1], sizeof(char), cmp);
        printf("Case %d: %s\n", i++, strcmp(a, b) == 0 ? "same" : "different");
    }
    return 0;
}