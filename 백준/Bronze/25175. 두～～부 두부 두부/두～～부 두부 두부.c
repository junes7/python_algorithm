#include <stdio.h>
int main(void) {
    int n, m, k, rlt;
    scanf("%d %d %d", &n, &m, &k);
    rlt = ((m - 1) + (k - 3) % n + n) % n + 1;
    printf("%d", rlt);
    return 0;
}