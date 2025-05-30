#include <math.h>
#include <stdio.h>
int main(void) {
    int d, a, b, t, h, m, s;
    while (1) {
        scanf("%d %d %d", &d, &a, &b);
        if (d == a && a == b) break;
        t = round((d / (double)a - d / (double)b) * 3600);
        h = t / 3600;
        m = (t % 3600) / 60;
        s = (t % 3600) % 60;
        printf("%01d:%02d:%02d\n", h, m, s);
    }
    return 0;
}