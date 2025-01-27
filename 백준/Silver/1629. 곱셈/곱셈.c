#include <stdio.h>

int main(void) {
    long a, b, c, res = 1;
    scanf("%d %d %d", &a, &b, &c);
    a %= c;
    while (b > 0) {
        if (b % 2 == 1)
            res = (res * a) % c;
        b /= 2;
        a = (a * a) % c;
    }
    printf("%d", res);
    return 0;
}