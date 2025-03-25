#include <stdio.h>
int main(void) {
    int n;
    double a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &a, &b);
        printf("The height of the triangle is %.2lf units\n", 2 * a / b);
    }
    return 0;
}