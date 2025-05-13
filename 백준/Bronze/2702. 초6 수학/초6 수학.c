#include <stdio.h>
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    int t, a, b, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        n = gcd(a, b);
        printf("%d %d\n", a * b / n, n);
    }
    return 0;
}