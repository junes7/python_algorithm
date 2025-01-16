#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int x2 = 0, y2 = 0, x, y, idx = 0, idy = 0, ptx[2][2], pty[2][2];
    bool flag = false;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &x);
        scanf("%d", &y);
        flag = true;
        for (int j = 0; j < idx; j++) {
            if (ptx[j][0] == x) {
                flag = false;
                ptx[j][1] += 1;
                break;
            }
        }
        if (flag) {
            ptx[idx][0] = x;
            ptx[idx++][1] = 1;
        }
        flag = true;
        for (int j = 0; j < idx; j++) {
            if (pty[j][0] == y) {
                flag = false;
                pty[j][1] += 1;
                break;
            }
        }
        if (flag) {
            pty[idy][0] = y;
            pty[idy++][1] = 1;
        }
    }
    for (int i = 0; i < 2; i++) {
        if (ptx[i][1] == 1) {
            x2 = ptx[i][0];
        }
        if (pty[i][1] == 1) {
            y2 = pty[i][0];
        }
    }
    printf("%d %d", x2, y2);
    return 0;
}