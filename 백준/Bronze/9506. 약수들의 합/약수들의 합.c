#include <stdio.h>

int main(void) {
    int a, d, s, num[10000], idx;
    while (1) {
        scanf("%d", &a);
        if (a == -1)
            break;
        else {
            d = 1, idx = 0, s = 0;
            while (d < a) {
                if (a % d == 0) {
                    num[idx++] = d;
                    s += d;
                }
                d += 1;
            }
        }
        if (s == a) {
            printf("%d = ", a);
            for (int i = 0; i < idx; i++) {
                if (i == idx - 1)
                    printf("%d\n", num[i]);
                else
                    printf("%d + ", num[i]);
            }
        } else {
            printf("%d is NOT perfect.\n", a);
        }
    }
    return 0;
}