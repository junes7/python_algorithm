#include <stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || a == c || b == c)
        printf("S");
    else if (a + b == c || a + c == b || b + c == a)
        printf("S");
    else
        printf("N");
    return 0;
}