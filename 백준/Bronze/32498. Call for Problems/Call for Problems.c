#include <stdio.h>
int main(void) {
    int n, d, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &d);
        if (d % 2 == 1)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}