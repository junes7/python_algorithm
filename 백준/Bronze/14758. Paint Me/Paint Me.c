#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n, w, l, h, a, m, x, y, total;
    while (true) {
        scanf("%d %d %d %d %d %d", &n, &w, &l, &h, &a, &m);
        if (n == 0) break;
        total = w * h * 2 + h * l * 2 + w * l;
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &x, &y);
            total -= x * y;
        }
        printf("%d\n", total * n / a + (total * n % a == 0 ? 0 : 1));
    }
    return 0;
}