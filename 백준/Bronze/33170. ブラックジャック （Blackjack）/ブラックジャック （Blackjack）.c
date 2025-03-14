#include <stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d", a + b + c <= 21 ? 1 : 0);
    return 0;
}