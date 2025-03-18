#include <stdio.h>
int main(void) {
    int n, a, b, c, d, r1, r2;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    r1 = (n / a + (n % a == 0 ? 0 : 1)) * b;
    r2 = (n / c + (n % c == 0 ? 0 : 1)) * d;
    printf("%d", r1 < r2 ? r1 : r2);
    return 0;
}