#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if (n / 4 == n / 4.0)
        printf("%.1f", n / 4.0);
    else
        printf("%.2f", n / 4.0);
    return 0;
}