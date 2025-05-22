#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, t, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 10);
    scanf("%s", st);
    while (strlen(st) > 1) {
        t = st[0] - 48;
        for (int i = 1; i < strlen(st); i++)
            t *= st[i] - 48;
        sprintf(st, "%d", t);
        cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}