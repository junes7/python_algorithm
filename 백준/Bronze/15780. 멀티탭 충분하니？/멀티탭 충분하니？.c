#include <stdio.h>
int main(void) {
    int n, k, cnt = 0, elem;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &elem);
        cnt += (elem + 1) / 2;
    }
    printf("%s", cnt >= n ? "YES" : "NO");
    return 0;
}