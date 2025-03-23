#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, order, s = 0;
    scanf("%d", &n);
    int *price = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &price[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &order);
        s += price[order - 1];
    }
    printf("%d", s);
    return 0;
}