#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, cnt = 0;
    char* st = (char*)malloc(sizeof(char) * 1001);
    char* t = (char*)malloc(sizeof(char) * 5);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len - 4 + 1; i++) {
        strncpy(t, st + i, 4);
        t[4] = '\0';
        if (strcmp(t, "DKSH") == 0)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}