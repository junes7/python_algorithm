#include <math.h>
#include <stdio.h>
int main(void) {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
        s += pow(i, 3);
    printf("%d", s);
    return 0;
}