#include <stdio.h>
int main(void) {
    int a, b, n, rlt;
    scanf("%d %d %d", &a, &b, &n);
    for (int i = 0; i < n; i++) {
        a = (a % b) * 10;
        rlt = a / b;
    }
    printf("%d", rlt);
    return 0;
}