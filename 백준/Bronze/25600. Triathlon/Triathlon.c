#include <stdio.h>
int main(void) {
    int n, a, d, g, s = 0, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &d, &g);
        t = a * (d + g) * (a == d + g ? 2 : 1);
        if (s < t) s = t;
    }
    printf("%d", s);
    return 0;
}