#include <stdio.h>
int main(void) {
    int n, elem, minn = 1000, maxn = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        if (minn > elem)
            minn = elem;
        if (maxn < elem)
            maxn = elem;
    }
    printf("%d", maxn - minn);
    return 0;
}