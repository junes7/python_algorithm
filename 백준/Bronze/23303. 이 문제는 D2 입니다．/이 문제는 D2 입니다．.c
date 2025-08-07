#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    bool flag;
    char *st = (char *)malloc(sizeof(char) * 10001);
    char *tar = (char *)malloc(sizeof(char) * 3);
    gets(st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (isalpha(st[i]) && isupper(st[i])) {
            st[i] += 32;
        }
    }
    flag = false;
    for (int i = 0; i < len - 1; i++) {
        strncpy(tar, st + i, 2);
        tar[2] = '\0';
        if (strcmp(tar, "d2") == 0) {
            flag = true;
            break;
        }
    }
    printf("%s", flag ? "D2" : "unrated");
    return 0;
}