#include <stdio.h>
int main(void) {
    int y, m;
    scanf("%d", &y);
    scanf("%d", &m);
    printf("%d", m + (m - y));
    return 0;
}