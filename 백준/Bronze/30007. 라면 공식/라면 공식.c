#include <stdio.h>
int main(void) {
    int n, A, B, X;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &A, &B, &X);
        printf("%d\n", A * (X - 1) + B);
    }
    return 0;
}