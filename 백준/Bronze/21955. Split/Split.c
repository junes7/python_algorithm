#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    char *st = (char *)malloc(sizeof(char) * 19);
    char *t1 = (char *)malloc(sizeof(char) * 19);
    char *t2 = (char *)malloc(sizeof(char) * 19);
    scanf("%s", st);
    len = strlen(st) / 2;
    strncpy(t1, st, len);
    strncpy(t2, st + len, len);
    t1[len] = '\0';
    t2[len] = '\0';
    printf("%s %s", t1, t2);
    return 0;
}