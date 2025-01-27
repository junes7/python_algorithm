#include <stdio.h>
int main(void) {
    int n, rem, cnt = 0, coins[6] = {500, 100, 50, 10, 5, 1};
    scanf("%d", &n);
    rem = 1000 - n;
    for (int i = 0; i < sizeof(coins) / sizeof(int); i++) {
        cnt += rem / coins[i];
        rem %= coins[i];
    }
    printf("%d", cnt);
    return 0;
}