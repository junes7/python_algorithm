#include <stdio.h>

int gcd(int x, int y) {
    return (x % y == 0) ? y : gcd(y, x % y);
}

int main(void) {
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b / gcd(a, b));
    }
    return 0;
}