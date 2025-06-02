#include <math.h>
#include <stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", b - a - 1 > c - b - 1 ? b - a - 1 : c - b - 1);
    return 0;
}