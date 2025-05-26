#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    long long s;
    char *st = (char *)malloc(sizeof(char) * 14);
    char *t = (char *)malloc(sizeof(char) * 14);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        s = 0, len = strlen(st);
        for (int j = 0; j < len; j++)
            s += st[j] - 48;
        strncpy(t, st + (len - 3), 3);
        t[3] = '\0';
        s += atoll(t) * 10;
        if (s < 1000)
            s += 1000;
        sprintf(t, "%lld", s);
        len = strlen(t);
        strncpy(st, t + (len - 4), 4);
        st[4] = '\0';
        printf("%s\n", st);
    }
    return 0;
}