#include <stdio.h>
int main(void) {
    int b, p;
    scanf("%d", &b);
    p = 5 * b - 400;
    printf("%d\n%d", p, p == 100 ? 0 : (p < 100 ? 1 : -1));
    return 0;
}