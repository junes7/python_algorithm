#include <stdio.h>
int main(void) {
    int w, h, x, y;
    scanf("%d %d %d %d", &w, &h, &x, &y);
    printf("%d", w - x >= 2 && h - y >= 2 ? 1 : 0);
    return 0;
}