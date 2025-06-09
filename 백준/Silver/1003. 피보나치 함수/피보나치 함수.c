#include <stdio.h>
int main(void) {
    int t, n, a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        a = 1, b = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            c = a;
            a = b;
            b = c + b;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}