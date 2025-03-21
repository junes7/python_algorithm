#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* st = (char*)malloc(sizeof(char) * 33);
    int len, und_cnt = 0, colo_cnt = 0;
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len; i++) {
        if (st[i] == ':')
            colo_cnt += 1;
        else if (st[i] == '_')
            und_cnt += 1;
    }
    printf("%d", len + colo_cnt + und_cnt * 5);
    return 0;
}