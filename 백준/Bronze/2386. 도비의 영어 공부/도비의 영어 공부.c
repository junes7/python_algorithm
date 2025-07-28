#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char tar, *st = (char*)malloc(sizeof(char) * 251);
    int cnt, len;
    while (1) {
        scanf("%c", &tar);
        if (tar == '#') break;
        gets(st);
        cnt = 0, len = strlen(st);
        for (int i = 0; i < len; i++) {
            if (isupper(st[i]))
                st[i] += 32;
            if (st[i] == tar)
                cnt += 1;
        }
        printf("%c %d\n", tar, cnt);
    }
    return 0;
}