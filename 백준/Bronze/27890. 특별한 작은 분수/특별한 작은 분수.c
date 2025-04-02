#include <stdio.h>
int main(void) {
    int x, n;
    scanf("%d %d", &x, &n);
    for (int i = 0; i < n; i++) {
        if (x % 2 == 0) {
            x = x / 2 ^ 6;
        } else {
            x = (x * 2) ^ 6;
        }
    }
    printf("%d", x);
    return 0;
}