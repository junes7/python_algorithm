#include <stdio.h>
int main(void) {
    long long n, rlt = 0;
    scanf("%lld", &n);
    for (long long i = 1; i < n; i++)
        rlt += n * i + i;
    printf("%lld", rlt);
    return 0;
}