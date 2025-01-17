#include <stdio.h>

int main(void) {
    int n, x, y, minx = 10000, maxx = -10000, miny = 10000, maxy = -10000;
    scanf("%d", &n);
    if (n == 1)
        printf("%d", 0);
    else {
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            if (minx > x)
                minx = x;
            if (maxx < x)
                maxx = x;
            if (miny > y)
                miny = y;
            if (maxy < y)
                maxy = y;
        }
        printf("%ld", (maxx - minx) * (maxy - miny));
    }
    return 0;
}