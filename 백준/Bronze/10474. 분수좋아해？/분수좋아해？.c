#include <stdio.h>
int main(void) {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == b && b == 0) break;
        printf("%d %d / %d\n", a / b, a % b, b);
    }
    return 0;
}