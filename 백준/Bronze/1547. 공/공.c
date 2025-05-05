#include <stdio.h>
int main(void) {
    int m, x, y, t;
    scanf("%d", &m);
    int cups[4] = {0, 1, 2, 3};
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        t = cups[x];
        cups[x] = cups[y];
        cups[y] = t;
    }
    for (int i = 1; i < 4; i++) {
        if (cups[i] == 1) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}