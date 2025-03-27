#include <math.h>
#include <stdio.h>
int main(void) {
    long long a;
    scanf("%lld", &a);
    printf("%.6lf", sqrt(a) * 4);
    return 0;
}