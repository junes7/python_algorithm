#include <stdio.h>
int main(void) {
    int d, h, m, time;
    scanf("%d %d %d", &d, &h, &m);
    if (d < 11 || (d <= 11 && h < 11) || (d <= 11 && h <= 11 && m < 11))
        time = -1;
    else {
        time = (d - 11) * 24 * 60 + (h - 11) * 60 + (m - 11);
        if (time < 0)
            time += 24 * 60;
    }
    printf("%d", time);
    return 0;
}