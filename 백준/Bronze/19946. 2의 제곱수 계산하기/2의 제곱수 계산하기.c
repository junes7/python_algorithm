#include <stdio.h>
int main(void) {
    unsigned long long n;
    int k = 64;
    scanf("%llu", &n);
    while (n % 2 == 0) {
        n /= 2;
        k -= 1;
    }
    printf("%d", k);
    return 0;
}