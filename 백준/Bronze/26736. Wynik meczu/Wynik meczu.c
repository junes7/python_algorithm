#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, cntA = 0, cntB = 0;
    char *st = (char *)malloc(sizeof(char) * 100001);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (st[i] == 'A')
            cntA += 1;
        else
            cntB += 1;
    }
    printf("%d : %d", cntA, cntB);
    return 0;
}