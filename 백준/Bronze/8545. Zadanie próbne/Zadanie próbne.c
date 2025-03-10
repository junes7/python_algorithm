#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    char *st = (char *)malloc(sizeof(char) * 4);
    scanf("%s", st);
    len = strlen(st);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", st[i]);
    return 0;
}