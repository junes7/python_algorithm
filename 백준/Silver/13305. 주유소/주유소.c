#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long n, elem;
    long long minprice, money = 0;
    scanf("%ld", &n);
    long *distances = (long *)malloc(sizeof(long) * (n - 1));
    long *prices = (long *)malloc(sizeof(long) * n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%ld", &elem);
        distances[i] = elem;
    }
    for (int i = 0; i < n; i++) {
        scanf("%ld", &elem);
        prices[i] = elem;
    }
    minprice = prices[0];
    for (int i = 1; i < n; i++) {
        money += minprice * distances[i - 1];
        if (minprice >= prices[i])
            minprice = prices[i];
    }
    printf("%lld", money);
    return 0;
}