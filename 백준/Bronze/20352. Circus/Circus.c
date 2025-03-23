#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
int main(void) {
    double pi = M_PI;
    long long a;
    scanf("%lld", &a);
    printf("%.6f", pow(a / pi, 0.5) * 2 * pi);
    return 0;
}