#include <stdio.h>
int main(void) {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    printf("%d", A + 7 * B <= 30 ? 1 : 0);
    return 0;
}