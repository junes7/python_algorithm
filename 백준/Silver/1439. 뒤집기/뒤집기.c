#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int cnt = 0, len;
    char *st = (char *)malloc(sizeof(char) * 1000001);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len - 1; i++) {
        if (st[i] != st[i + 1])
            cnt += 1;
    }
    printf("%d", (cnt + 1) / 2);
    return 0;
}