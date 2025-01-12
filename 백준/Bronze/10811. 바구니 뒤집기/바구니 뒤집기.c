#include <stdio.h>

int main(void) {
    int n, m, a, b, t, num[100] = {0,};
    scanf("%d %d",&n,&m);
    for (int i = 1; i < n + 1; i++)
        num[i] = i;
    for (int i = 0; i < m; i++) {
        scanf("%d %d",&a,&b);
        for (int j = 0; j < (b - a + 1) / 2; j++) {
            t = num[a + j];
            num[a + j] = num[b - j];
            num[b - j] = t;
        }
    }
    for (int i = 1; i < n + 1; i++)
        printf("%d ",num[i]);
    return 0;
}