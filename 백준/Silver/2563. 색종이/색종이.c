#include <stdio.h>
#include <string.h>

int main(void) {
    int n, mat[100][100], xst, yst, cnt = 0;
    memset(mat, 0, sizeof(int) * 100 * 100);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &xst, &yst);
        for (int j = yst; j < yst + 10; j++) {
            for (int k = xst; k < xst + 10; k++) {
                if (mat[j][k] == 0) {
                    mat[j][k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (mat[i][j] == 1)
                cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}