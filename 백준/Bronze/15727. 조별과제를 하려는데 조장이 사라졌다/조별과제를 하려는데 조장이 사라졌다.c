#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", n / 5 + (n % 5 == 0 ? 0 : 1));
    return 0;
}