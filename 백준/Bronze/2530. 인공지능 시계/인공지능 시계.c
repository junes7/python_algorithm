#include <stdio.h>
int main(void) {
    int h, m, s, t;
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &t);
    if (t >= 3600) {
        h += t / 3600;
        t %= 3600;
    }
    m += t / 60;
    s += t % 60;
    if (s >= 60) {
        m += s / 60;
        s %= 60;
    }
    if (m >= 60) {
        h += m / 60;
        m %= 60;
    }
    if (h >= 24) h %= 24;
    printf("%d %d %d", h, m, s);
    return 0;
}