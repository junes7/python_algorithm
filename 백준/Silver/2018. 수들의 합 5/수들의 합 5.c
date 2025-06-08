#include <stdio.h>
int main(void) {
    int n, total = 0, end = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        while (total < n && end < n) {
            total += end + 1;
            end += 1;
        }
        if (total == n) cnt += 1;
        total -= i;
    }
    printf("%d", cnt);
    return 0;
}