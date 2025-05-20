#include <stdio.h>
int main(void) {
    int t, n, d, vi, fi, ci, cnt;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &d);
        cnt = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d %d %d", &vi, &fi, &ci);
            if (vi * (fi / (double)ci) >= d)
                cnt += 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}