#include <stdio.h>
int main(void) {
    int n;
    double m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &m);
        printf("$%.2f\n", m * 0.8);
    }
    return 0;
}