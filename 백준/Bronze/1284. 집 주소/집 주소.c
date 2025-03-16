#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* st = (char*)malloc(sizeof(char) * 5);
    int s, len;
    while (scanf("%s", st) != EOF) {
        if (strcmp(st, "0") == 0) break;
        len = strlen(st), s = 2;
        for (int i = 0; i < len; i++) {
            if (st[i] == '1')
                s += 2;
            else if (st[i] == '0')
                s += 4;
            else
                s += 3;
        }
        s += (len - 1);
        printf("%d\n", s);
    }
    return 0;
}