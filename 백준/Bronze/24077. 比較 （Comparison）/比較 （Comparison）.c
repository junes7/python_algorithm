#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, cnt = 0;
    scanf("%d %d", &n, &m);
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] <= b[j])
                cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}