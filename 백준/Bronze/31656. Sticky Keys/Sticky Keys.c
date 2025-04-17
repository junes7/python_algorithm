#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, idx = 1;
    char *st = (char *)malloc(sizeof(char) * 1001);
    char *t = (char *)malloc(sizeof(char) * 1001);
    gets(st);
    len = strlen(st);
    t[0] = st[0];
    for (int i = 1; i < len; i++) {
        if (st[i] == st[i - 1])
            continue;
        t[idx++] = st[i];
    }
    t[idx] = '\0';
    printf("%s", t);
    return 0;
}