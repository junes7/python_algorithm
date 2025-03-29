#include <stdio.h>
int main(void) {
    int n, k, x;
    scanf("%d", &n);
    scanf("%d", &k);
    x = k + 60 < n ? k + 60 : n;
    printf("%d", x * 1500 + (n - x) * 3000);
    return 0;
}