#include <math.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
int main(void) {
    double pi = M_PI;
    int a1, p1, r1, p2;
    scanf("%d %d", &a1, &p1);
    scanf("%d %d", &r1, &p2);
    printf("%s", a1 * p2 > pow(r1, 2) * pi * p1 ? "Slice of pizza" : "Whole pizza");
    return 0;
}