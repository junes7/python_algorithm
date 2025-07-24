#include <stdio.h>
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    int a, b, gcdn;
    scanf("%d %d", &a, &b);
    gcdn = gcd(a, b);
    for (int i = 1; i < gcdn + 1; i++) {
        if (gcdn % i == 0) {
            printf("%d %d %d\n", i, a / i, b / i);
        }
    }
    return 0;
}