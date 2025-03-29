#include <stdio.h>
int main(void) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    printf("%d", n % (k - m) == 0 ? n / (k - m) : n / (k - m) + 1);
    return 0;
}