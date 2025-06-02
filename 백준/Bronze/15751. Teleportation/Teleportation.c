#include <math.h>
#include <stdio.h>
int main(void) {
    int a, b, x, y, t1, rlt;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    if (a > b) {
        t1 = a;
        a = b;
        b = t1;
    }
    if (x > y) {
        t1 = x;
        x = y;
        y = t1;
    }
    rlt = b - a < abs(x - a) + abs(y - b) ? b - a : abs(x - a) + abs(y - b);
    printf("%d", rlt);
    return 0;
}