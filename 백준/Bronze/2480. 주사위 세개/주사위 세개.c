#include <stdio.h>
int main(void) {
    int a, b, c, prize;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        prize = 10000 + a * 1000;
    } else if (a == b || a == c || b == c) {
        if (a == b || a == c) {
            prize = 1000 + a * 100;
        } else {
            prize = 1000 + b * 100;
        }
    } else {
        prize = (a > b ? (a > c ? a : c) : (b > c ? b : c)) * 100;
    }
    printf("%d", prize);
    return 0;
}