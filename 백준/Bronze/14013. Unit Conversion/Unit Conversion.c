#include <stdio.h>
int main(void) {
    double A, B, z;
    int n;
    char q;
    scanf("%lf %lf", &A, &B);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %c", &z, &q);
        printf("%.12f\n", q == 'A' ? z * B / A : z * A / B);
    }
    return 0;
}