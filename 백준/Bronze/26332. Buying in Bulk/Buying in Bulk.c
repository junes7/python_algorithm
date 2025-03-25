#include <stdio.h>
int main(void) {
    int n, c, p;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &c, &p);
        printf("%d %d\n%d\n", c, p, c == 1 ? p : p + (c - 1) * (p - 2));
    }
    return 0;
}