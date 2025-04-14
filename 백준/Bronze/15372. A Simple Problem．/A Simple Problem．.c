#include <math.h>
#include <stdio.h>
int main(void) {
    int t;
    long long n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%lld", &n);
        printf("%lld\n", (long long)pow(n, 2));
    }
    return 0;
}