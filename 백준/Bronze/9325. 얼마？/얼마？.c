#include <stdio.h>
int main(void) {
    int t, n, s, p, q;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &s);
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d %d", &p, &q);
            s += p * q;
        }
        printf("%d\n", s);
    }
    return 0;
}