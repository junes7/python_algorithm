#include <math.h>
#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    a -= 1, b -= 1;
    printf("%d", abs(a / 4 - b / 4) + abs(a % 4 - b % 4));
    return 0;
}