#include <stdio.h>
int main(void) {
    int p, q, a, b;
    scanf("%d %d", &p, &q);
    scanf("%d %d", &a, &b);
    printf("%d", p < q ? p * a + (q - p) * b : q * a);
    return 0;
}