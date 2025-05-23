#include <stdio.h>
int main(void) {
    int n, m, total;
    scanf("%d %d", &n, &m);
    total = n;
    while (n >= m) {
        total += n / m;
        n /= m;
    }
    printf("%d", total);
    return 0;
}