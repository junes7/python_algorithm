#include <stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    printf("%d", a + b >= 2 * c ? a + b - 2 * c : a + b);
    return 0;
}