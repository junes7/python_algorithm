#include <stdio.h>
int main(void) {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    double maxd[2], arr[4] = {(double)a / c + (double)b / d, (double)c / d + (double)a / b, (double)d / b + (double)c / a, (double)b / a + (double)d / c};
    maxd[0] = 0;
    maxd[1] = arr[0];
    for (int i = 1; i < 4; i++) {
        if (maxd[1] < arr[i]) {
            maxd[0] = i;
            maxd[1] = arr[i];
        }
    }
    printf("%.0lf", maxd[0]);
    return 0;
}