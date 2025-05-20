#include <stdio.h>
int main(void) {
    int a, b, c, d, cnt, elem;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &elem);
        cnt = 0;
        if (0 < elem % (a + b) && elem % (a + b) <= a)
            cnt += 1;
        if (0 < elem % (c + d) && elem % (c + d) <= c)
            cnt += 1;
        printf("%d\n", cnt);
    }
    return 0;
}