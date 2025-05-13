#include <stdio.h>
int main(void) {
    int t, n, cre, c;
    double g, total;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        cre = 0, total = 0.0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d %lf", &c, &g);
            cre += c;
            total += c * g;
        }
        printf("%d %.1f\n", cre, total / cre);
    }
    return 0;
}