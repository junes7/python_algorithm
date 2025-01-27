#include <stdio.h>
int main(void) {
    int n, rem, coins[4] = {25, 10, 5, 1};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &rem);
        for (int j = 0; j < sizeof(coins) / sizeof(int); j++) {
            printf("%d ", rem / coins[j]);
            rem %= coins[j];
        }
        printf("\n");
    }
    return 0;
}