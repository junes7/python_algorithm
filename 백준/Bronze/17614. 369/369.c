#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, cnt = 0;
    scanf("%d", &n);
    char* st = (char*)malloc(sizeof(char) * 8);
    for (int i = 3; i < n + 1; i++) {
        sprintf(st, "%d", i);
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (st[j] == '3' || st[j] == '6' || st[j] == '9')
                cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}