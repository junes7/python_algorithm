#include <stdio.h>
int main(void) {
    long long a, b, t;
    scanf("%lld %lld", &a, &b);
    printf("%lld", (a + b) * ((a < b ? b - a : a - b) + 1) / 2);
    return 0;
}