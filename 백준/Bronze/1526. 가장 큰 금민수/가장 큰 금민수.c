#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 8);
    bool flag;
    int n, len;
    scanf("%d", &n);
    for (int i = n; i > 3; i--) {
        sprintf(st, "%d", i);
        flag = true;
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (st[j] != '4' && st[j] != '7') {
                flag = false;
                break;
            }
        }
        if (flag) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}