#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s = 0, *A, *B;
    scanf("%d", &n);
    A = (int*)malloc(sizeof(int) * n);
    B = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < n; i++) {
        s += A[i] > B[i] ? 3 : (A[i] == B[i] ? 1 : 0);
    }
    printf("%d", s);
    return 0;
}