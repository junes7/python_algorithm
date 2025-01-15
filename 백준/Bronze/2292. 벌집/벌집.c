#include <stdio.h>

int main(void) {
    int n, cnt = 1, ran = 2;
    scanf("%d", &n);
    while (ran <= n) {
        ran += 6 * cnt++;
    }
    printf("%d", cnt);
    return 0;
}