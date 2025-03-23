#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *st = (char *)malloc(sizeof(char) * 6);
    int steps, s = 0;
    while (scanf("%s %d", st, &steps) != EOF)
        s += (strcmp(st, "Es") == 0 ? 21 : 17) * steps;
    printf("%d", s);
    return 0;
}