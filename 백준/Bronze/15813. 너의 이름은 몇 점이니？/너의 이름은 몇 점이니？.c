#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0;
    char *st = (char *)malloc(sizeof(char) * 101);
    scanf("%d %s", &n, st);
    for (int i = 0; i < n; i++)
        cnt += st[i] - 64;
    printf("%d", cnt);
    return 0;
}