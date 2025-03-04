#include <stdio.h>
int main(void) {
    int total, diff;
    scanf("%d %d", &total, &diff);
    if (total < diff || (total + diff) % 2 != 0)
        printf("%d", -1);
    else
        printf("%d %d", (total + diff) / 2, (total - diff) / 2);
    return 0;
}