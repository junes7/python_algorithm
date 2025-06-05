#include <stdio.h>
int main(void) {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%d %d %d\n", n * (n + 1) / 2, n * n, n * (n + 1));
    }
    return 0;
}