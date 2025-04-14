#include <stdio.h>
int main(void) {
    int n;
    double d, f, p;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &d, &f, &p);
        printf("$%.2lf\n", d * f * p);
    }
    return 0;
}