#include <stdio.h>
int main(void) {
    int n, t;
    scanf("%d", &n);
    t = 7 * (n);
    printf("%d %d", 2024 + t / 12, 1 + t % 12);
    return 0;
}