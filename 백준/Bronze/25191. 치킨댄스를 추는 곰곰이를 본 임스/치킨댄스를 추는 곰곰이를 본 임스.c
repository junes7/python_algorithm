#include <stdio.h>
int main(void) {
    int n, a, b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    printf("%d", a / 2 + b <= n ? a / 2 + b : n);
    return 0;
}