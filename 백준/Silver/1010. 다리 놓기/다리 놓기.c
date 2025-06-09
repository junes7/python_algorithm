#include <stdio.h>
int main(void) {
    int t, n, m;
    long long bridge, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        bridge = 1, k = 1;
        for (int j = m; j > m - n; j--) {
            bridge *= j;
            bridge /= k++;
        }
        printf("%lld\n", bridge);
    }
    return 0;
}