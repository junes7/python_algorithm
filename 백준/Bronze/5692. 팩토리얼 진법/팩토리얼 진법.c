#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int facto(int n) {
    return n > 1 ? n * facto(n - 1) : 1;
}
int main(void) {
    char *n = (char *)malloc(sizeof(char) * 6);
    int s, len;
    while (1) {
        scanf("%s", n);
        s = 0;
        if (strcmp(n, "0") == 0) break;
        len = strlen(n);
        for (int i = 1; i < len + 1; i++) {
            s += (n[len - i] - 48) * facto(i);
        }
        printf("%d\n", s);
    }
    return 0;
}