#include <stdio.h>
int main(void) {
    int t, n, cnt;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        cnt = 0;
        for (int j = 1; j < n + 1; j++) {
            if (n % j == 0)
                cnt += 1;
        }
        printf("%d %d\n", n, cnt);
    }
    return 0;
}