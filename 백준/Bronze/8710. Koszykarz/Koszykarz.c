#include <stdio.h>
int main(void) {
    int k, w, m, diff;
    scanf("%d %d %d", &k, &w, &m);
    diff = w - k;
    printf("%d", diff / m + (diff % m == 0 ? 0 : 1));
    return 0;
}