#include <stdio.h>
#include <stdlib.h>

long gcd(long x, long y) {
    return x % y == 0 ? y : gcd(y, x % y);
}

int main(void) {
    int** num = (int**)malloc(sizeof(int*) * 2);
    long numer, denom;
    for (int i = 0; i < 2; i++) {
        num[i] = (int*)malloc(sizeof(int) * 2);
        scanf("%d %d", &num[i][0], &num[i][1]);
    }
    numer = num[0][0] * num[1][1] + num[0][1] * num[1][0];
    denom = num[0][1] * num[1][1];
    printf("%ld %ld", numer / gcd(numer, denom), denom / gcd(numer, denom));
    return 0;
}