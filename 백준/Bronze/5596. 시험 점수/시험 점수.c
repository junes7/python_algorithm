#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int sums = 0, sumt = 0, *s = (int*)malloc(sizeof(int) * 4), *t = (int*)malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++) {
        scanf("%d", &s[i]);
        sums += s[i];
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d", &t[i]);
        sumt += t[i];
    }
    printf("%d", sums >= sumt ? sums : sumt);
    return 0;
}