#include <stdio.h>
int main(void) {
    int x, y, cnt = 1;
    scanf("%d %d", &x, &y);
    while (1) {
        if ((y - x) * cnt >= y) break;
        cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}