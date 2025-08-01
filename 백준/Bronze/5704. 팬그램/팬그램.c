#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 201);
    int len, *alpha = (int *)malloc(sizeof(int) * 26);
    bool flag;
    while (1) {
        memset(alpha, 0, sizeof(int) * 26);
        gets(st);
        if (strcmp(st, "*") == 0) break;
        len = strlen(st);
        for (int i = 0; i < len; i++) {
            if (isalpha(st[i]))
                alpha[st[i] - 97] += 1;
        }
        flag = true;
        for (int i = 0; i < 26; i++) {
            if (alpha[i] == 0) {
                flag = false;
                break;
            }
        }
        printf("%c\n", flag ? 'Y' : 'N');
    }
    return 0;
}