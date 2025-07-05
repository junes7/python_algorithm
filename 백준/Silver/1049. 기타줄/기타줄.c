#include <stdio.h>
int main(void) {
    int n, m, pack, each, min_p = 1000, min_e = 1000;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &pack, &each);
        if (min_p > pack) min_p = pack;
        if (min_e > each) min_e = each;
    }
    if (min_p >= min_e * 6)
        printf("%d", min_e * n);
    else
        printf("%d", min_p * (n / 6) + (min_p < min_e * (n % 6) ? min_p : min_e * (n % 6)));
    return 0;
}