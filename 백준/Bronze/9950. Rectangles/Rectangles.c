#include <stdio.h>
int main(void) {
    int l, w, a;
    while (1) {
        scanf("%d %d %d", &l, &w, &a);
        if (l == w && w == a && a == 0) break;
        if (w == 0) {
            printf("%d %d %d\n", l, a / l, a);
        } else if (l == 0) {
            printf("%d %d %d\n", a / w, w, a);
        } else {
            printf("%d %d %d\n", l, w, l * w);
        }
    }
    return 0;
}