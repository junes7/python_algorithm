#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    char *n = (char *)malloc(sizeof(char) * 12);
    bool flag;
    scanf("%s", n);
    len = strlen(n);
    if (strcmp(n, "12345678910") == 0)
        printf("%d", 10);
    else {
        flag = true;
        for (int i = 0; i < len; i++) {
            if (i + 1 != n[i] - 48) {
                flag = false;
                break;
            }
        }
        printf("%d", flag ? n[len - 1] - 48 : -1);
    }
    return 0;
}