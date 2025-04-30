#include <stdio.h>
int main(void) {
    int n, elem, maxn = 0, minn = 1000000;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        if (maxn < elem)
            maxn = elem;
        if (minn > elem)
            minn = elem;
    }
    printf("%d", maxn * minn);
    return 0;
}