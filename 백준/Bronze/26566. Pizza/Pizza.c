#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
int main(void) {
    int n, a1, p1, r1, p2;
    double pi = M_PI;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a1, &p1);
        scanf("%d %d", &r1, &p2);
        printf("%s\n", a1 / p1 < pi * pow(r1, 2) / p2 ? "Whole pizza" : "Slice of pizza");
    }
    return 0;
}