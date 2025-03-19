#include <stdio.h>
int main(void) {
    int n, p, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p, &t);
        printf("%d\n", p - t / 7 + t / 4);
    }
    return 0;
}