#include <stdio.h>
int main(void) {
    int p, k, n, s;
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        s = 0;
        scanf("%d %d", &k, &n);
        for (int j = 1; j < n + 1; j++) {
            s += j + 1;
        }
        printf("%d %d\n", k, s);
    }
    return 0;
}