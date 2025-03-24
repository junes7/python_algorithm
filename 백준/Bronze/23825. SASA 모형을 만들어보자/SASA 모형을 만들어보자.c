#include <stdio.h>
int main(void) {
    int n, m, t;
    scanf("%d %d", &n, &m);
    printf("%d", n < m ? n / 2 : m / 2);
    return 0;
}