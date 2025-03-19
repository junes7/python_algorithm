#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%.10f\n", (100.0 - n) / n + 1);
    printf("%.10f", n / (100.0 - n) + 1);
    return 0;
}