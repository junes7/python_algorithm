#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, m;
    char *st = (char *)malloc(sizeof(char) * (2016 * 2016 + 1));
    char *tmp = (char *)malloc(sizeof(char) * (2016 * 2016 + 1));
    memset(st, 0, sizeof(char) * (2016 * 2016 + 1));
    char *t = (char *)malloc(sizeof(char) * 5);
    scanf("%d %d", &n, &m);
    sprintf(t, "%d", n);
    for (int i = 0; i < n; i++)
        strcat(st, t);
    strncpy(tmp, st, m);
    printf("%s", tmp);
    return 0;
}