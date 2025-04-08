#include <stdio.h>
int main(void) {
    int k, n, s, d, di, vi, total;
    scanf("%d", &k);
    for (int i = 1; i < k + 1; i++) {
        scanf("%d %d %d", &n, &s, &d);
        total = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d %d", &di, &vi);
            if (di / s + (di % s == 0 ? 0 : 1) <= d)
                total += vi;
        }
        printf("Data Set %d:\n%d\n\n", i, total);
    }
    return 0;
}