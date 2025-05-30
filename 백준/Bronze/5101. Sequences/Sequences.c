#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, diff, t;
    char *st = (char *)malloc(sizeof(char) * 4);
    while (1) {
        scanf("%d %d %d", &n, &diff, &t);
        if (diff == 0) break;
        sprintf(st, "%d", (t - n) / diff + 1);
        printf("%s\n", (t - n) % diff == 0 && (t - n) / diff + 1 > 0 ? st : "X");
    }
    return 0;
}