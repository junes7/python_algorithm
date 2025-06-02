#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t, h, w, len, tem;
    char *st = (char *)malloc(sizeof(char) * 12);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &h, &w);
        for (int j = 0; j < h; j++) {
            scanf("%s", st);
            len = strlen(st);
            for (int k = 0; k < len / 2; k++) {
                tem = st[k];
                st[k] = st[len - 1 - k];
                st[len - 1 - k] = tem;
            }
            printf("%s\n", st);
        }
    }
    return 0;
}