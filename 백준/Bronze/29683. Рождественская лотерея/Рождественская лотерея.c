#include <stdio.h>
int main(void) {
    int n, elem, A, cnt = 0;
    scanf("%d %d", &n, &A);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        cnt += elem / A;
    }
    printf("%d", cnt);
    return 0;
}