#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    while (n >= 1) {
        printf("%d ", n);
        if (n == 1) break;
        n = n % 2 == 0 ? n / 2 : n * 3 + 1;
    }
    return 0;
}