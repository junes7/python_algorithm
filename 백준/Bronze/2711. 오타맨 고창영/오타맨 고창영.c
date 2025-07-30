#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *tmp, *rlt, *st = (char *)malloc(sizeof(char) * 81);
    rlt = (char *)malloc(sizeof(char) * 80);
    tmp = (char *)malloc(sizeof(char) * 80);
    int n, idx, len;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &idx, st);
        len = strlen(st);
        memset(rlt, 0, sizeof(char) * 80);
        memset(tmp, 0, sizeof(char) * 80);
        strncpy(rlt, st, idx - 1);
        strncpy(tmp, st + idx, len - idx);
        strcat(rlt, tmp);
        printf("%s\n", rlt);
    }
    return 0;
}