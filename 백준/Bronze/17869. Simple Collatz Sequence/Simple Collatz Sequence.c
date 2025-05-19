#include <stdio.h>
int main(void) {
    long long n, cnt = 0;
    scanf("%lld", &n);
    while (n > 1) {
        n = n % 2 == 0 ? n / 2 : n + 1;
        cnt += 1;
    }
    printf("%lld", cnt);
    return 0;
}