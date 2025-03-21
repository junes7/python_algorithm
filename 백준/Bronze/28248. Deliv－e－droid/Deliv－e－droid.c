#include <stdio.h>
int main(void) {
    int P, C;
    scanf("%d", &P);
    scanf("%d", &C);
    printf("%d", P * 50 - C * 10 + (P > C ? 500 : 0));
    return 0;
}