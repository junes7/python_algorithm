#include <stdio.h>
int main(void) {
    int a, b, c = 3;
    scanf("%d %d", &a, &b);
    c += (a - 2 < b - 1 ? a - 2 : b - 1) * 2;
    printf("%d", c);
    return 0;
}