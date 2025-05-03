#include <stdio.h>
int main(void) {
    int a, b, c, x, y;
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
    if (a + b < 2 * c) {
        printf("%d", a * x + b * y);
    } else {
        printf("%d", 2 * c * (x < y ? x : y) + (a < 2 * c ? a : 2 * c) * (0 > x - y ? 0 : x - y) + (b < 2 * c ? b : 2 * c) * (0 > y - x ? 0 : y - x));
    }
    return 0;
}