#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, cnt = 0;
    char *t = (char *)malloc(sizeof(char) * 11);
    char *st = (char *)malloc(sizeof(char) * 11);
    char *sub_t = (char *)malloc(sizeof(char) * 11);
    char *sub_st = (char *)malloc(sizeof(char) * 11);
    scanf("%s", t);
    scanf("%d", &n);
    strncpy(sub_t, t + 0, 5);
    sub_t[5] = '\0';
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        strncpy(sub_st, st + 0, 5);
        sub_st[5] = '\0';
        if (strcmp(sub_t, sub_st) == 0)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}