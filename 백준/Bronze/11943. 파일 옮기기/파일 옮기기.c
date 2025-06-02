#include <stdio.h>
int main(void) {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    printf("%d", a + d < b + c ? a + d : b + c);
    return 0;
}