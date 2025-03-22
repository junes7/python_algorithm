#include <math.h>
#include <stdio.h>
int main(void) {
    int A, B;
    double M;
    scanf("%d %d", &A, &B);
    M = (B - A) / 400.0;
    printf("%f", 1 / (1 + pow(10, M)));
    return 0;
}