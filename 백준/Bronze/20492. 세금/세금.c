#include <stdio.h>
int main(void) {
    int n, n1, n2;
    scanf("%d", &n);
    n1 = (int)n * 0.78;
    n2 = (int)(n - (n * 0.2) * 0.22);
    printf("%d %d", n1, n2);
    return 0;
}