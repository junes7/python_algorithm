#include <stdio.h>
int main(void) {
    int n, a, b, time = 1001;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a <= b && b < time)
            time = b;
    }
    printf("%d", time == 1001 ? -1 : time);
    return 0;
}