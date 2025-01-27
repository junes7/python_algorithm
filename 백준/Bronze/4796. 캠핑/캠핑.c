#include <stdio.h>

int main(void) {
    int l, p, v, cnt = 0;
    while (1) {
        scanf("%d %d %d", &l, &p, &v);
        cnt += 1;
        if (l + p + v == 0)
            break;
        printf("Case %d: %d\n", cnt, v % p > l ? l * (v / p + 1) : l * (v / p) + v % p);
    }
    return 0;
}