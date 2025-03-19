#include <stdio.h>
int main(void) {
    int n, h, v, m = 0;
    scanf("%d %d %d", &n, &h, &v);
    int row[2] = {h, n - h};
    int col[2] = {v, n - v};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (m < row[i] * col[j])
                m = row[i] * col[j];
        }
    }
    printf("%d", m * 4);
    return 0;
}