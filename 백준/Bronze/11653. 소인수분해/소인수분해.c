#include <stdio.h>

int main(void) {
    int n, d = 2;
    scanf("%d", &n);
    while (n > 1) {
        if (n % d == 0) {
            printf("%d\n", d);
            n /= d;
        } else {
            d += 1;
        }
    }
    return 0;
}