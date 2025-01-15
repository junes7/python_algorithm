#include <math.h>
#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d", &n);
    m = pow(2, n) + 1;
    m *= m;
    printf("%d", m);
    return 0;
}