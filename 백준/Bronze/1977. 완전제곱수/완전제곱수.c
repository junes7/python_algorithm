#include <math.h>
#include <stdio.h>
int main(void) {
    int m, n, s = 0, minn;
    scanf("%d", &m);
    scanf("%d", &n);
    minn = n;
    for (int i = m; i < n + 1; i++) {
        if (sqrt(i) == (int)sqrt(i)) {
            if (minn > i) minn = i;
            s += i;
        }
    }
    if (s > 0) {
        printf("%d\n%d", s, minn);
    } else {
        printf("%d", -1);
    }
    return 0;
}