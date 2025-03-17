#include <stdio.h>
int main(void) {
    int R, C, N;
    long long s;
    scanf("%d %d %d", &R, &C, &N);
    s = R / N + (R % N == 0 ? 0 : 1);
    s *= C / N + (C % N == 0 ? 0 : 1);
    printf("%lld", s);
    return 0;
}