#include <stdio.h>
int main(void) {
    int gen, add, n, consu;
    scanf("%d %d", &gen, &add);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &consu);
        printf("%d %d\n", consu, consu <= 1000 ? gen * consu : 1000 * gen + (consu - 1000) * add);
    }
    return 0;
}