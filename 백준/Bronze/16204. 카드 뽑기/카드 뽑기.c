#include <stdio.h>
int main(void) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int fr[2] = {m, n - m};
    int bk[2] = {k, n - k};
    printf("%d", (fr[0] < bk[0] ? fr[0] : bk[0]) + (fr[1] < bk[1] ? fr[1] : bk[1]));
    return 0;
}