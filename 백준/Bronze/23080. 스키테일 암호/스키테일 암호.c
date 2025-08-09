#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n;
    char *st = (char *)malloc(sizeof(char) * 1001);
    scanf("%d %s", &n, st);
    for (int i = 0; i < strlen(st); i += n)
        printf("%c", st[i]);
    return 0;
}