#include <stdio.h>

int main(void) {
    int n, t, num[4][2] = {{25, 0}, {10, 0}, {5, 0}, {1, 0}};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        for (int i = 0; i < 4; i++) {
            num[i][1] = t / num[i][0];
            t %= num[i][0];
        }
        for (int i = 0; i < 4; i++)
            printf("%d ", num[i][1]);
        printf("\n");
    }
    return 0;
}