#include <stdio.h>
int main(void) {
    int a, b, t;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        t = a - b;
        if (t > 3)
            printf("%d %d\n", t / 2 - t % 2, t % 2);
        else
            printf("%d %d\n", t == 2 ? 1 : 0, t == 3 ? 1 : 0);
    }
    return 0;
}