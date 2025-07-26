#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, len;
    char *st = (char *)malloc(sizeof(char) * 1001);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        printf("%s\n", st[len / 2 - 1] == st[len / 2] ? "Do-it" : "Do-it-Not");
    }
    return 0;
}