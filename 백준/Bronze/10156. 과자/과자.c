#include <stdio.h>
int main(void) {
    int k, n, m;
    scanf("%d %d %d", &k, &n, &m);
    printf("%d", k * n - m < 0 ? 0 : k * n - m);
    return 0;
}