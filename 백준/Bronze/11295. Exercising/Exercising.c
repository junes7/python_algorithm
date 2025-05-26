#include <stdio.h>
int main(void) {
    int L, n, walk, cnt = 1;
    while (1) {
        scanf("%d", &L);
        if (L == 0) break;
        scanf("%d", &n);
        printf("User %d\n", cnt++);
        for (int i = 0; i < n; i++) {
            scanf("%d", &walk);
            printf("%.5f\n", walk * L / 100000.0);
        }
    }
    return 0;
}