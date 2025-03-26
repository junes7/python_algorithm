#include <stdio.h>
int main(void) {
    int a, x, b, y, t;
    scanf("%d", &a);
    scanf("%d", &x);
    scanf("%d", &b);
    scanf("%d", &y);
    scanf("%d", &t);
    printf("%d %d", t - 30 > 0 ? a + (t - 30) * x * 21 : a, t - 45 > 0 ? b + (t - 45) * y * 21 : b);
    return 0;
}