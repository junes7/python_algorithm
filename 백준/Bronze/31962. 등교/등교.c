#include <stdio.h>
int main(void) {
    int n, x, s, t, maxn = -1;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s, &t);
        if (s + t <= x)
            if (maxn < s)
                maxn = s;
    }
    printf("%d", maxn);
    return 0;
}