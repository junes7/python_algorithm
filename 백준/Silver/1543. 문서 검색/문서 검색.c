#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len_st, len_tar, i = 0, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 2501);
    char *tar = (char *)malloc(sizeof(char) * 51);
    char *t = (char *)malloc(sizeof(char) * 51);
    gets(st);
    gets(tar);
    len_st = strlen(st);
    len_tar = strlen(tar);
    if (len_tar <= len_st) {
        while (i < len_st - len_tar + 1) {
            strncpy(t, st + i, len_tar);
            t[len_tar] = '\0';
            if (strcmp(t, tar) == 0) {
                i += len_tar;
                cnt += 1;
            } else {
                i += 1;
            }
        }
    } else {
        cnt = 0;
    }
    printf("%d\n", cnt);
    return 0;
}