#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n, m, cnt, *x, *y;
    scanf("%d", &t);
    for (int l = 0; l < t; l++) {
        scanf("%d %d", &n, &m);
        cnt = 0;
        x = (int*)malloc(sizeof(int) * n);
        y = (int*)malloc(sizeof(int) * m);
        for (int i = 0; i < n; i++)
            scanf("%d", &x[i]);
        for (int j = 0; j < m; j++)
            scanf("%d", &y[j]);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < 101; k++) {
                    if (x[i] == k && k == y[j]) {
                        cnt += 1;
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}