#include <stdio.h>

int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d", gcd(a, b), a * b / gcd(a, b));
    return 0;
}