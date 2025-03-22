#include <math.h>
#include <stdio.h>
int main(void) {
    long long a;
    scanf("%lld", &a);
    printf("%.6f", pow(a, 0.5) * 4);
    return 0;
}