#include <math.h>
#include <stdio.h>
int main(void) {
    int L, R, A, a, b, t, rlt;
    scanf("%d %d %d", &L, &R, &A);
    a = L < R ? L : R, b = L > R ? L : R;
    t = b - a < A ? b - a : A;
    a += t;
    A -= t;
    rlt = a * 2 + (A ? A / 2 * 2 : 0);
    printf("%d", rlt);
    return 0;
}