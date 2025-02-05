#include <stdio.h>
#include <stdlib.h>
int **multi(int **a, int **b, int n) {
    int **m = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        m[i] = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            m[i][j] = 0;
            for (int k = 0; k < n; k++)
                m[i][j] += a[i][k] * b[k][j] % 1000;
        }
    }
    return m;
}
int **square(int **x, long long exp, int n) {
    if (exp == 1)
        return x;
    int **temp = square(x, exp / 2, n);
    int **t = multi(temp, temp, n);
    return exp % 2 == 0 ? t : multi(t, x, n);
}
int main(void) {
    int n;
    long long b;
    scanf("%d %lld", &n, &b);
    int **a = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        a[i] = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    int **r = square(a, b, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", r[i][j] % 1000);
        }
        printf("\n");
    }
    return 0;
}