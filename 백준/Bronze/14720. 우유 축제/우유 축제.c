#include <stdio.h>
int main(void) {
    int n, cnt = 0, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        if (elem == cnt % 3)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}