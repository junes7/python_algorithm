#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* st = (char*)malloc(sizeof(char) * 1001);
    int len;
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        st[i] = st[i] < 68 ? st[i] + 26 - 3 : st[i] - 3;
    }
    printf("%s", st);
    return 0;
}