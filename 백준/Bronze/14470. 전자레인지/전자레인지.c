#include <math.h>
#include <stdio.h>
int main(void) {
    int a, b, c, d, e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    printf("%d", a < 0 ? abs(a) * c + d + b * e : (b - a) * e);
    return 0;
}