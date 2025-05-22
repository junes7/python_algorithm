#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* st = (char*)malloc(sizeof(char) * 20);
    int t, len, cnt;
    long long rlt = 1;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &t);
        rlt *= t;
    }
    sprintf(st, "%lld", rlt);
    len = strlen(st);
    for (int i = 0; i < 10; i++) {
        cnt = 0;
        for (int j = 0; j < len; j++) {
            if (i == st[j] - 48)
                cnt += 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}