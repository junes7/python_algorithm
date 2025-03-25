#include <math.h>
#include <stdio.h>
int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%.0f", ceil(x * y / 4840.0 / 5.0));
    return 0;
}