#include <stdio.h>
int main(void) {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        if (n <= 1000000) {
            printf("%.f\n", n * 1.0);
        } else if (1000000 < n && n <= 5000000) {
            printf("%.f\n", n * 0.9);
        } else {
            printf("%.f\n", n * 0.8);
        }
    }
    return 0;
}