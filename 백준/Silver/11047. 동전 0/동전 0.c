#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, k, elem, cnt = 0;
    scanf("%d %d", &n, &k);
    int *coins = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        coins[i] = elem;
    }
    for (int i = n - 1; i >= 0; i--) {
        cnt += k / coins[i];
        k %= coins[i];
    }
    printf("%d", cnt);
    return 0;
}