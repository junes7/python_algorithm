#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a = 1, b = 1, n, t;
    scanf("%d", &n);
    for (int i = 2; i < n + 1; i++) {
        t = a;
        a = b;
        b = (t + b) % 15746;
    }
    printf("%d", b);
    return 0;
}