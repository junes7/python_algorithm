#include <stdio.h>
int main(void) {
    double C, w, l, total = 0;
    int n;
    scanf("%lf", &C);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &w, &l);
        total += w * l * C;
    }
    printf("%.7f", total);
    return 0;
}