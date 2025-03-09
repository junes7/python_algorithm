#include <math.h>
#include <stdio.h>
int main(void) {
    int n, i = 1;
    scanf("%d", &n);
    while (pow(i, 2) <= n)
        i++;
    printf("The largest square has side length %d.", i - 1);
    return 0;
}