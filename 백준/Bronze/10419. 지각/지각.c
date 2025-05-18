#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int t, d, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &d);
        t = 0;
        while (true) {
            if (t * (t + 1) > d) break;
            t += 1;
        }
        printf("%d\n", t - 1);
    }
    return 0;
}