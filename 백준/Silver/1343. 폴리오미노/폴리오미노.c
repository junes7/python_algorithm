#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int idx = 0, len, size[2] = {4, 2};
    bool flag;
    char* st = (char*)malloc(sizeof(char) * 51);
    char* t = (char*)malloc(sizeof(char) * 51);
    char find_st[2][5] = {"XXXX", "XX"};
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < len;) {
            strncpy(t, st + j, size[i]);
            t[size[i]] = '\0';
            if (strcmp(t, find_st[i]) == 0) {
                for (int k = j; k < j + size[i]; k++)
                    st[k] = (char)(65 + i);
                j += size[i];
            } else
                j += 1;
        }
    }
    flag = true;
    for (int i = 0; i < len; i++) {
        if (st[i] == 'X') {
            flag = false;
            break;
        }
    }
    printf("%s", flag ? st : "-1");
    return 0;
}