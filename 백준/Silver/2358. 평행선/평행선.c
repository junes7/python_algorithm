#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
struct coord {
    int elem, cnt;
};
int main(void) {
    int n, x, y, xidx = 0, yidx = 0, rlt = 0;
    scanf("%d", &n);
    bool flagx, flagy;
    struct coord *dicx = (struct coord *)malloc(sizeof(struct coord) * n);
    struct coord *dicy = (struct coord *)malloc(sizeof(struct coord) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        flagx = true;
        for (int i = 0; i < xidx; i++) {
            if (dicx[i].elem == x) {
                flagx = false;
                dicx[i].cnt += 1;
                break;
            }
        }
        if (flagx) {
            dicx[xidx].elem = x;
            dicx[xidx++].cnt = 1;
        }
        flagy = true;
        for (int i = 0; i < yidx; i++) {
            if (dicy[i].elem == y) {
                flagy = false;
                dicy[i].cnt += 1;
                break;
            }
        }
        if (flagy) {
            dicy[yidx].elem = y;
            dicy[yidx++].cnt = 1;
        }
    }
    for (int i = 0; i < xidx; i++) {
        if (dicx[i].cnt >= 2)
            rlt += 1;
    }
    for (int i = 0; i < yidx; i++) {
        if (dicy[i].cnt >= 2)
            rlt += 1;
    }
    printf("%d", rlt);
    return 0;
}