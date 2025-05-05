#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len, minn, maxn;
    char *a = (char *)malloc(sizeof(char) * 8);
    char *b = (char *)malloc(sizeof(char) * 8);
    scanf("%s %s", a, b);
    len = strlen(a);
    for (int i = 0; i < len; i++) {
        a[i] = a[i] - 48 == 6 ? '5' : a[i];
        b[i] = b[i] - 48 == 6 ? '5' : b[i];
    }
    minn = atoi(a) + atoi(b);
    for (int i = 0; i < len; i++) {
        a[i] = a[i] - 48 == 5 ? '6' : a[i];
        b[i] = b[i] - 48 == 5 ? '6' : b[i];
    }
    maxn = atoi(a) + atoi(b);
    printf("%d %d", minn, maxn);
    return 0;
}