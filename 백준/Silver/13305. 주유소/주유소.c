#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, elem, minprice, money = 0;
    scanf("%d", &n);
    int *distances = (int *)malloc(sizeof(int) * (n - 1));
    int *prices = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &elem);
        distances[i] = elem;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        prices[i] = elem;
    }
    minprice = prices[0];
    for (int i = 1; i < n; i++) {
        money += minprice * distances[i - 1];
        if (minprice >= prices[i])
            minprice = prices[i];
    }
    printf("%d", money);
    return 0;
}