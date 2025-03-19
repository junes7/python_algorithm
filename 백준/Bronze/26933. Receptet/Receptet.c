#include <stdio.h>
int main(void) {
    int n, h, b, k, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &h, &b, &k);
        if (b > h)
            s += (b - h) * k;
    }
    printf("%d", s);
    return 0;
}