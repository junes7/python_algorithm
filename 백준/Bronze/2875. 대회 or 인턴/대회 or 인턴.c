#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n, m, k, teams = 0;
    scanf("%d %d %d", &n, &m, &k);
    while (true) {
        n -= 2;
        m -= 1;
        if (n < 0 || m < 0 || n + m < k) break;
        teams += 1;
    }
    printf("%d", teams);
    return 0;
}