#include <stdio.h>
int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a % 2 == 1 && b % 2 == 1)
        printf("%lld", a < b ? a : b);
    else
        printf("%lld", 0);
    return 0;
}