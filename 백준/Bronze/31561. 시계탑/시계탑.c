#include <stdio.h>
int main(void) {
    int m;
    scanf("%d", &m);
    printf("%.1f", m - 30 > 0 ? 30 / 2 + (m - 30) * 3 / 2.0 : m / 2.0);
    return 0;
}