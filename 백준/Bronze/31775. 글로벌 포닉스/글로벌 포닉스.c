#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *pa, const void *pb) {
    const char a = *(char *)pa;
    const char b = *(char *)pb;
    return a - b;
}
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 21);
    char cnt[4], abbrev[4] = {"klp"};
    for (int i = 0; i < 3; i++) {
        scanf("%s", st);
        cnt[i] = st[0];
    }
    cnt[3] = '\0';
    qsort(cnt, 3, sizeof(char), compare);
    printf("%s", strcmp(abbrev, cnt) == 0 ? "GLOBAL" : "PONIX");
    return 0;
}