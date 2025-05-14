#include <stdio.h>
int main(void) {
    int t, n, m, rem;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        rem = m * 2 - n;
        printf("%d %d\n", rem, m - rem);
    }
    return 0;
}