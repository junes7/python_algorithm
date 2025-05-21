#include <stdio.h>
int main(void) {
    int a, b, c, m, t = 0, w = 0;
    scanf("%d %d %d %d", &a, &b, &c, &m);
    for (int i = 0; i < 24; i++) {
        if (t + a <= m) {
            t += a;
            w += b;
        } else {
            t = t - c >= 0 ? t - c : 0;
        }
    }
    printf("%d", w);
    return 0;
}