#include <stdio.h>
int main(void) {
    int k;
    double s;
    scanf("%d", &k);
    s = 25 + k * 0.01;
    printf("%.2f", s > 2000 ? 2000 : (s < 100 ? 100 : s));
    return 0;
}