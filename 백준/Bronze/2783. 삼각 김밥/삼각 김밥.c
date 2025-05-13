#include <stdio.h>
int main(void) {
    int x, y, n;
    double price;
    scanf("%d %d", &x, &y);
    price = x * 1000.0 / y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (price > x * 1000.0 / y)
            price = x * 1000.0 / y;
    }
    printf("%.2f", price);
    return 0;
}