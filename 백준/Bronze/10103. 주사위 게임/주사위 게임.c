#include <stdio.h>
int main(void) {
    int n, x, y, total[2] = {100, 100};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (x < y)
            total[0] -= y;
        else if (x > y)
            total[1] -= x;
    }
    for (int i = 0; i < 2; i++)
        printf("%d\n", total[i]);
    return 0;
}