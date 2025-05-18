#include <stdio.h>
int main(void) {
    int t, n, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &c);
        printf("%d\n", n / c + (n % c == 0 ? 0 : 1));
    }
    return 0;
}