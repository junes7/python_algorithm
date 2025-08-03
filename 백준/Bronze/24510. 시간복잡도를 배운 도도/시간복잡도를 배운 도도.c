#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, maxn = 0, cnt;
    char *st = (char *)malloc(sizeof(char) * 10001);
    char *tmp = (char *)malloc(sizeof(char) * 10001);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        cnt = 0, len = strlen(st);
        if (len >= 5) {
            for (int j = 0; j < len - 4; j++) {
                strncpy(tmp, st + j, 5);
                tmp[5] = '\0';
                if (strcmp(tmp, "while") == 0)
                    cnt += 1;
            }
        }
        if (len >= 3) {
            for (int j = 0; j < len - 2; j++) {
                strncpy(tmp, st + j, 3);
                tmp[3] = '\0';
                if (strcmp(tmp, "for") == 0)
                    cnt += 1;
            }
        }
        if (maxn < cnt)
            maxn = cnt;
    }
    printf("%d", maxn);
    return 0;
}