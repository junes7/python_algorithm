#include <stdio.h>
#include <stdlib.h>
int main(void) {
    double x, rlt;
    scanf("%lf", &x);
    rlt = 100.0 / ((1.609344 / 3.785411784) * x);
    printf("%.6f", rlt);
    return 0;
}