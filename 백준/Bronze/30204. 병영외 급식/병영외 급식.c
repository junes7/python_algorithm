#include <stdio.h>
int main(void) {
    int n, x, elem, s = 0;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        s += elem;
    }
    printf("%d", s % x == 0 ? 1 : 0);
    return 0;
}