#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char *st = (char *)malloc(sizeof(char) * 19);
    bool flag;
    scanf("%d", &n);
    gets(st);
    for (int i = 0; i < n; i++) {
        gets(st);
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (isalpha(st[j]) && isupper(st[j]))
                st[j] += 32;
        }
        flag = true;
        for (int i = 0; i < len / 2; i++) {
            if (st[i] != st[len - 1 - i]) {
                flag = false;
                break;
            }
        }
        printf("%s\n", flag ? "Yes" : "No");
    }
    return 0;
}