#include <stdio.h>
long long gcd(int x, int y) {
    return (x % y == 0) ? y : gcd(y, x % y);
}
int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a * b / gcd(a, b));
    return 0;
}