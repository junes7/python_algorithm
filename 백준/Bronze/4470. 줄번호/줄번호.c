#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    char *st = (char *)malloc(sizeof(char) * 51);
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++) {
        gets(st);
        if (i > 0) printf("%d. %s\n", i, st);
    }
    return 0;
}