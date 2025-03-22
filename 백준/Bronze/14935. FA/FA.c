#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, n;
    char *st = (char *)malloc(sizeof(char) * 101);
    char *t = (char *)malloc(sizeof(char) * 101);
    scanf("%s", st);
    sprintf(t, "%d", (st[0] - 48) * strlen(st));
    len = strlen(t);
    while (atoi(t) != (t[0] - 48) * len) {
        sprintf(t, "%d", (t[0] - 48) * len);
        len = strlen(t);
    }
    printf("%s", (atoi(t) == (t[0] - 48) * len) ? "FA" : "NFA");
    return 0;
}