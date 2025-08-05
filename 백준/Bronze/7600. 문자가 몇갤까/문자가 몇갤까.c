#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int idx;
    bool flag;
    char tmp, *alpha, *st = (char*)malloc(sizeof(char) * 251);
    alpha = (char*)malloc(sizeof(char) * 26);
    while (1) {
        gets(st);
        if (strcmp(st, "#") == 0) break;
        idx = 0;
        for (int i = 0; i < strlen(st); i++) {
            if (isalpha(st[i])) {
                tmp = isupper(st[i]) ? tolower(st[i]) : st[i];
                flag = true;
                for (int j = 0; j < idx; j++) {
                    if (alpha[j] == tmp) {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    alpha[idx++] = tmp;
            }
        }
        printf("%d\n", idx);
    }
    return 0;
}