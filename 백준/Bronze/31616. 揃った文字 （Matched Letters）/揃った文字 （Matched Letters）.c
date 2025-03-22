#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char t;
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%d", &n);
    scanf("%s", st);
    len = strlen(st);
    t = st[0];
    for (int i = 1; i < len; i++) {
        if (st[i] != t) {
            printf("%s", "No");
            return 0;
        }
    }
    printf("%s", "Yes");
    return 0;
}