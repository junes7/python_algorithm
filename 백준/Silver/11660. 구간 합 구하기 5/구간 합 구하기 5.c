#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, *pt = (int *)malloc(sizeof(int) * 4);
    scanf("%d %d", &n, &m);
    int **num = (int **)malloc(sizeof(int *) * (n + 1));
    for (int i = 0; i < n + 1; i++) {
        num[i] = (int *)malloc(sizeof(int) * (n + 1));
        num[i][0] = 0;
        for (int j = 1; j < n + 1; j++) {
            if (i == 0)
                num[i][j] = 0;
            else
                scanf("%d", &num[i][j]);
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            num[i][j] += num[i - 1][j] + num[i][j - 1] - num[i - 1][j - 1];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &pt[j]);
        }
        printf("%d\n", num[pt[2]][pt[3]] - num[pt[0] - 1][pt[3]] - num[pt[2]][pt[1] - 1] + num[pt[0] - 1][pt[1] - 1]);
    }
    return 0;
}