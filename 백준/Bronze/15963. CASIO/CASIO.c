#include <stdio.h>
int main(void) {
    long n, m;
    scanf("%ld %ld", &n, &m);
    printf("%d", n == m ? 1 : 0);
    return 0;
}