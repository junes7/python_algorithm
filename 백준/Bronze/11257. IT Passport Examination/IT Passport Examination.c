#include <stdio.h>
int main(void) {
    int n, id, strat, manage, tech, total;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &id, &strat, &manage, &tech);
        total = strat + manage + tech;
        if (strat >= 35 * 0.3 && manage >= 25 * 0.3 && tech >= 40 * 0.3 && total >= 55)
            printf("%d %d %s\n", id, total, "PASS");
        else
            printf("%d %d %s\n", id, total, "FAIL");
    }
    return 0;
}