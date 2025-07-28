#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char *st = (char *)malloc(sizeof(char) * 51);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        for (int j = 0; j < len; j++)
            st[j] = (st[j] - 64) % 26 + 65;
        printf("String #%d\n%s\n\n", i + 1, st);
    }
    return 0;
}