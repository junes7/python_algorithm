#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, a, s = 0;
    scanf("%d %d", &n, &m);
    int *num = (int *)malloc(sizeof(int) * n);
    num[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &a);
        s += a;
        num[i] = s;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &s);
        printf("%d\n", num[s] - num[a - 1]);
    }
    return 0;
}