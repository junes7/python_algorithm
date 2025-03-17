#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len, idx;
    char *st = (char *)malloc(sizeof(char) * 101);
    char *t = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        memset(t, 0, sizeof(char) * 101);
        idx = 0;
        scanf("%s", st);
        t[idx++] = st[0];
        len = strlen(st);
        for (int j = 0; j < len; j++) {
            if (t[idx - 1] != st[j])
                t[idx++] = st[j];
        }
        printf("%s\n", t);
    }
    return 0;
}