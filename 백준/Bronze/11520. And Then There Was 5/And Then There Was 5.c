#include <stdio.h>
int main(void) {
    int n, p, d;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p, &d);
        printf("%d %d\n", d, 5);
    }
    return 0;
}