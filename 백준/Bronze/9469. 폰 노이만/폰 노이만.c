#include <stdio.h>
int main(void) {
    int p, n;
    double d, a, b, f;
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d %lf %lf %lf %lf", &n, &d, &a, &b, &f);
        printf("%d %.6f\n", n, d / (a + b) * f);
    }
    return 0;
}