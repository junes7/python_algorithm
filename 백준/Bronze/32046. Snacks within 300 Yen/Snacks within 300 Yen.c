#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int n, ans, x;
    while (true) {
        scanf("%d", &n);
        ans = 0;
        if (n == 0) break;
        while (n--) {
            scanf("%d", &x);
            if (ans + x < 301)
                ans += x;
        }
        printf("%d\n", ans);
    }
    return 0;
}