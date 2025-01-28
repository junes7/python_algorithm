#include <stdio.h>

int main(void) {
    int n, cnt = 0, coins[2] = {5, 2};
    scanf("%d", &n);
    if (n > coins[0]) {
        while (n % coins[0] > 0) {
            n -= coins[1];
            cnt += 1;
        }
    }
    for (int i = 0; i < sizeof(coins) / sizeof(int); i++) {
        cnt += n / coins[i];
        n %= coins[i];
    }
    printf("%d", n == 0 ? cnt : -1);
    return 0;
}