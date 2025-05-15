#include <stdio.h>
int main(void) {
    int n, a = 1, b = 2, ans = 0;
    scanf("%d", &n);
    while (a != b) {
        if (b * b - a * a == n) {
            ans += 1;
            b += 1;
        } else if (b * b - a * a > n) {
            a += 1;
        } else {
            b += 1;
        }
    }
    printf("%d", ans);
    return 0;
}