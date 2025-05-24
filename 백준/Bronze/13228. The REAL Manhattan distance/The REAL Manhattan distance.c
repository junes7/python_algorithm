#include <math.h>
#include <stdio.h>
int main(void) {
    int n, x1, y1, f1, x2, y2, f2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &f1, &x2, &y2, &f2);
        printf("%d\n", f1 + f2 + abs(x2 - x1) + abs(y2 - y1));
    }
    return 0;
}