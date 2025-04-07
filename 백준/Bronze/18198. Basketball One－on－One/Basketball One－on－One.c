#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 201);
    int len, *total = (int *)malloc(sizeof(int) * 2);
    scanf("%s", st);
    len = strlen(st);
    memset(total, 0, sizeof(int) * 2);
    for (int i = 0; i < len; i = i + 2)
        total[st[i] - 65] += st[i + 1] - 48;
    printf("%c", total[0] > total[1] ? 'A' : 'B');
    return 0;
}