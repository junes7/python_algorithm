#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, rlt = 1;
    char mobis[5] = {'M', 'O', 'B', 'I', 'S'};
    char *st = (char *)malloc(sizeof(char) * 101);
    bool flag = true;
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < 5; i++) {
        flag = false;
        for (int j = 0; j < len; j++) {
            if (mobis[i] == st[j]) {
                flag = true;
                break;
            }
        }
        rlt *= flag ? 1 : 0;
        if (!rlt) break;
    }
    printf("%s", rlt ? "YES" : "NO");
    return 0;
}