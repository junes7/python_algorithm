#include <math.h>
#include <stdio.h>
int main(void) {
    int n, rlt;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        rlt = 0;
        for (int i = 1; i < n + 1; i++) {
            rlt += pow(n - i + 1, 2);
        }
        printf("%d\n", rlt);
    }
    return 0;
}