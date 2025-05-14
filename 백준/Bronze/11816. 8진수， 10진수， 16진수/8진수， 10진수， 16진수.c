#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, m = 1, total = 0;
    char* st = (char*)malloc(sizeof(char) * 10);
    scanf("%s", st);
    len = strlen(st) - 1;
    if (st[1] == 'x') {
        for (int i = len; i > 1; i--) {
            total += (st[i] - (isalpha(st[i]) ? 87 : 48)) * m;
            m *= 16;
        }
    } else {
        if (st[0] == '0') {
            for (int i = len; i > 0; i--) {
                total += (st[i] - 48) * m;
                m *= 8;
            }
        } else
            total = atoi(st);
    }
    printf("%d", total);
    return 0;
}