#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m, k, s;
    scanf("%d %d", &n, &m);
    int **a = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        a[i] = (int *)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &m, &k);
    int **b = (int **)malloc(sizeof(int *) * m);
    for (int i = 0; i < m; i++) {
        b[i] = (int *)malloc(sizeof(int) * k);
        for (int j = 0; j < k; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int **r = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        r[i] = (int *)malloc(sizeof(int) * k);
        for (int j = 0; j < k; j++) {
            s = 0;
            for (int l = 0; l < m; l++) {
                s += a[i][l] * b[l][j];
            }
            r[i][j] = s;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}