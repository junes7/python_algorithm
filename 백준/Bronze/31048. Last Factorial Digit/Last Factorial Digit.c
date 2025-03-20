#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int facto(int n) {
    return n == 1 ? 1 : n * facto(n - 1);
}
int main(void) {
    int n, elem, len;
    char* st = (char*)malloc(sizeof(char) * 8);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        sprintf(st, "%d", facto(elem));
        len = strlen(st);
        printf("%c\n", st[len - 1]);
    }
    return 0;
}