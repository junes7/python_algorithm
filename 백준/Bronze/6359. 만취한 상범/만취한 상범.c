#include <stdio.h>
int main(void) {
    int t, n, rlt;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        rlt = 0;
        scanf("%d", &n);
        for (int j = 1; j < n; j++) {
            if (j * j > n) break;
            rlt += 1;
        }
        printf("%d\n", rlt);
    }
    return 0;
}