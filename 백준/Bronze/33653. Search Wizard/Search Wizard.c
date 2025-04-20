#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int m, l, len, cnt = 0;
    char *w = (char *)malloc(sizeof(char) * 11);
    char *st = (char *)malloc(sizeof(char) * (pow(10, 5)));
    char *t = (char *)malloc(sizeof(char) * (pow(10, 5)));
    scanf("%s", w);
    scanf("%d", &m);
    len = strlen(w);
    for (int i = 0; i < m; i++) {
        scanf("%s", st);
        l = strlen(st) - len + 1;
        for (int j = 0; j < l; j++) {
            strncpy(t, st + j, len);
            t[len] = '\0';
            if (strcmp(t, w) == 0) {
                cnt += 1;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}