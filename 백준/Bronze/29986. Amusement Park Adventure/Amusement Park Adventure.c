#include <stdio.h>
int main(void) {
    int n, h, elem, cnt = 0;
    scanf("%d %d", &n, &h);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        if (h >= elem) cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}