#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, w = 0, b = 0;
    char* st = (char*)malloc(sizeof(char) * 1000001);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (st[i] == 'B')
            w += 1;
        else if (st[i] == 'C')
            b += 1;
    }
    printf("%d", w / 2 + b / 2);
    return 0;
}