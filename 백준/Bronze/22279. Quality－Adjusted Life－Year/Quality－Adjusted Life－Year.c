#include <stdio.h>
int main(void) {
    int n;
    double q, y, rlt = 0.0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &q, &y);
        rlt += q * y;
    }
    printf("%.3lf", rlt);
    return 0;
}