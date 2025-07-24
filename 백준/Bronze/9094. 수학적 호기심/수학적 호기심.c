#include <stdio.h>
int main(void) {
    int t, n, m, cnt;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        cnt = 0;
        for (int j = 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((j * j + k * k + m) % (j * k) == 0)
                    cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}