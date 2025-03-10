#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, m, l, t, result = 0, **board, **lu, **ld, **ru, **rd;
    scanf("%d %d", &n, &m);
    char *st = (char *)malloc(sizeof(char) * (m + 1));
    board = (int **)malloc(sizeof(int *) * (n + 2));
    for (int i = 0; i < n + 2; i++) {
        board[i] = (int *)malloc(sizeof(int) * (m + 2));
        memset(board[i], 0, sizeof(int) * (m + 2));
    }
    lu = (int **)malloc(sizeof(int *) * (n + 2));
    for (int i = 0; i < n + 2; i++) {
        lu[i] = (int *)malloc(sizeof(int) * (m + 2));
        memset(lu[i], 0, sizeof(int) * (m + 2));
    }
    ru = (int **)malloc(sizeof(int *) * (n + 2));
    for (int i = 0; i < n + 2; i++) {
        ru[i] = (int *)malloc(sizeof(int) * (m + 2));
        memset(ru[i], 0, sizeof(int) * (m + 2));
    }
    ld = (int **)malloc(sizeof(int *) * (n + 2));
    for (int i = 0; i < n + 2; i++) {
        ld[i] = (int *)malloc(sizeof(int) * (m + 2));
        memset(ld[i], 0, sizeof(int) * (m + 2));
    }
    rd = (int **)malloc(sizeof(int *) * (n + 2));
    for (int i = 0; i < n + 2; i++) {
        rd[i] = (int *)malloc(sizeof(int) * (m + 2));
        memset(rd[i], 0, sizeof(int) * (m + 2));
    }
    for (int i = 1; i < n + 1; i++) {
        scanf("%s", st);
        for (int j = 1; j < m + 1; j++) {
            board[i][j] = st[j - 1] - 48;
        }
    }
    for (int i = n; i > 0; i--) {
        for (int j = 1; j < m + 1; j++) {
            if (board[i][j] == 1) {
                ld[i][j] = ld[i + 1][j - 1] + 1;
                rd[i][j] = rd[i + 1][j + 1] + 1;
            }
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (board[i][j] == 1) {
                lu[i][j] = lu[i - 1][j - 1] + 1;
                ru[i][j] = ru[i - 1][j + 1] + 1;
            }
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            l = result > 0 ? result : 1;
            for (int k = l; k < (ld[i][j] < rd[i][j] ? ld[i][j] : rd[i][j]) + 1; k++) {
                t = i + 2 * (k - 1);
                if (t > n + 1) break;
                if (board[t][j] && lu[t][j] >= k && ru[t][j] >= k)
                    result = k;
            }
            for (int k = l; k < (ru[i][j] < rd[i][j] ? ru[i][j] : rd[i][j]) + 1; k++) {
                t = j + 2 * (k - 1);
                if (t > m + 1) break;
                if (board[i][t] && lu[i][t] >= k && ld[i][t] >= k)
                    result = k;
            }
        }
    }
    printf("%d", result);
    return 0;
}