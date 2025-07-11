#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a, b, n, minn, frq, t;
    scanf("%d %d", &a, &b);
    scanf("%d", &n);
    minn = abs(b - a);
    for (int i = 0; i < n; i++) {
        scanf("%d", &frq);
        t = abs(b - frq) + 1;
        minn = t < minn ? t : minn;
    }
    printf("%d", minn);
    return 0;
}