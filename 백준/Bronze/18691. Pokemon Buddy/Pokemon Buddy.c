#include <stdio.h>
int main(void) {
    int t, g, c, e, arr[3] = {1, 3, 5};
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &g, &c, &e);
        printf("%d\n", e - c > 0 ? arr[g - 1] * (e - c) : 0);
    }
    return 0;
}