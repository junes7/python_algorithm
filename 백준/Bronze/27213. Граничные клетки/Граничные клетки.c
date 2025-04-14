#include <stdio.h>
int main(void) {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    printf("%d", (m == 1 || n == 1) ? m * n : m * n - (m - 2) * (n - 2));
    return 0;
}