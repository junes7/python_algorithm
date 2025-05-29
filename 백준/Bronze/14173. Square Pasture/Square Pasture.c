#include <stdio.h>
int main(void) {
    int x1, y1, x2, y2, x3, y3, x4, y4, rltx, rlty, rlt;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
    rltx = (x2 > x4 ? x2 : x4) - (x1 < x3 ? x1 : x3);
    rlty = (y2 > y4 ? y2 : y4) - (y1 < y3 ? y1 : y3);
    rlt = rltx > rlty ? rltx : rlty;
    printf("%d", rlt * rlt);
    return 0;
}