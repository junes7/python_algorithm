#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n;
    char *st = (char *)malloc(sizeof(char) * 11);
    scanf("%d", &n);
    strcpy(st, "SciComLove");
    for (int i = 0; i < n; i++)
        printf("%s\n", st);
    return 0;
}