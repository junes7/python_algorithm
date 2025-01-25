#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, s, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        s = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &num);
            s += num;
        }
        printf("%d\n", s);
    }
    return 0;
}