#include <stdio.h>

int main(void) {
    int n, d, cnt, t = 0, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        d = 1, cnt = 0;
        scanf("%d", &elem);
        while (d <= elem) {
            if (elem % d == 0)
                cnt += 1;
            d += 1;
        }
        if (cnt == 2)
            t += 1;
    }
    printf("%d", t);

    return 0;
}