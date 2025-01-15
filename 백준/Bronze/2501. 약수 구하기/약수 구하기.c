#include <stdio.h>

int main(void) {
    int a, b, d = 1, idx = 0, num[10000];
    scanf("%d %d", &a, &b);
    while (d <= a) {
        if (a % d == 0)
            num[idx++] = d;
        d += 1;
    }
    printf("%d", idx >= b ? num[b - 1] : 0);
}