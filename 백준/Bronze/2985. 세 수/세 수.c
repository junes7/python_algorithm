#include <stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b == c)
        printf("%d+%d=%d", a, b, c);
    else if (a - b == c)
        printf("%d-%d=%d", a, b, c);
    else if (a * b == c)
        printf("%d*%d=%d", a, b, c);
    else if (a / b == c)
        printf("%d/%d=%d", a, b, c);
    else if (a == b + c)
        printf("%d=%d+%d", a, b, c);
    else if (a == b - c)
        printf("%d=%d-%d", a, b, c);
    else if (a == b * c)
        printf("%d=%d*%d", a, b, c);
    else if (a == b / c)
        printf("%d=%d/%d", a, b, c);
    return 0;
}