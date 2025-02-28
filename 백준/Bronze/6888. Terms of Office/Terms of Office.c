#include <stdbool.h>
#include <stdio.h>
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int main(void) {
    int x, y, gcdn, lcm;
    scanf("%d", &x);
    scanf("%d", &y);
    gcdn = gcd(4, 2);
    lcm = 4 * 2 * 3 * 5 / gcdn;
    while (true) {
        printf("All positions change in year %d\n", x);
        x += lcm;
        if (x > y) break;
    }
    return 0;
}