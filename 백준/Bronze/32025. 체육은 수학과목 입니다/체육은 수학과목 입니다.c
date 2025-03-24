#include <stdio.h>
int main(void) {
    int h, w, minn;
    scanf("%d", &h);
    scanf("%d", &w);
    minn = h < w ? h : w;
    printf("%.0f", minn / 2.0 * 100);
    return 0;
}