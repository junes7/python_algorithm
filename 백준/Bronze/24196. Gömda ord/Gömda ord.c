#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int i = 0, idx = 0, len;
    char *st = (char *)malloc(sizeof(char) * 51);
    char *r = (char *)malloc(sizeof(char) * 51);
    scanf("%s", st);
    len = strlen(st);
    r[idx++] = st[0];
    while (i < len - 1) {
        i += st[i] - 65 + 1;
        r[idx++] = st[i];
    }
    r[idx] = '\0';
    printf("%s", r);
    return 0;
}