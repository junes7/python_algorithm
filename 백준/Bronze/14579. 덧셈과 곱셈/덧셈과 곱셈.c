#include <stdio.h>
int main(void) {
    int a, b;
    long long rlt = 1;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b + 1; i++) {
        rlt *= (i * (i + 1) / 2);
        rlt %= 14579;
    }
    printf("%lld", rlt);
    return 0;
}