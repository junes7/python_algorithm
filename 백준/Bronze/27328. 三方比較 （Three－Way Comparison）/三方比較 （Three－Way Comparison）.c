#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a == b)
        printf("%d", 0);
    else
        printf("%d", a < b ? -1 : 1);
    return 0;
}