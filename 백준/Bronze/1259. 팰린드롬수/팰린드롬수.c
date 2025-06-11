#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 6);
    bool flag;
    int len;
    while (1) {
        scanf("%s", st);
        if (strcmp(st, "0") == 0) break;
        flag = true;
        len = strlen(st);
        for (int i = 0; i < len / 2; i++) {
            if (st[i] != st[len - 1 - i]) {
                flag = false;
                break;
            }
        }
        printf("%s\n", flag ? "yes" : "no");
    }
    return 0;
}