#include <stdio.h>
int main(void) {
    int p, n, m;
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", n >= 12 && m >= 4 ? 11 * m + 4 : -1);
    }
    return 0;
}