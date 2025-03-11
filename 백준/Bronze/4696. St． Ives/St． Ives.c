#include <math.h>
#include <stdio.h>
int main(void) {
    double n;
    while (scanf("%lf", &n) != EOF) {
        if (n == 0) break;
        n = 1 + n + pow(n, 2) + pow(n, 3) + pow(n, 4);
        printf("%.2f\n", n);
    }
    return 0;
}