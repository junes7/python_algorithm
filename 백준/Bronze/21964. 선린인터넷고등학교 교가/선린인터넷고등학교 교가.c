#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char *st = (char *)malloc(sizeof(char) * 100001);
    char t[100000];
    scanf("%d", &n);
    scanf("%s", st);
    len = strlen(st);
    strncpy(t, st + (len - 5), 5);
    printf("%s", t);
    return 0;
}