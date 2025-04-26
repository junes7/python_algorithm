#include <stdio.h>
int main(void) {
    int n, t, cnt = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        cnt += t - 1;
    }
    printf("%d", cnt);
    return 0;
}