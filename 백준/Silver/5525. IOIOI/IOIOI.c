#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, m, rlt = 0, i = 0, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 1000001);
    char *t = (char *)malloc(sizeof(char) * 1000001);
    scanf("%d %d %s", &n, &m, st);
    while (i < m - 1) {
        strncpy(t, st + i, 3);
        t[3] = '\0';
        if (strcmp(t, "IOI") == 0) {
            i += 2;
            cnt += 1;
            if (cnt == n) {
                rlt += 1;
                cnt -= 1;
            }
        } else {
            i += 1;
            cnt = 0;
        }
    }
    printf("%d", rlt);
    return 0;
}