#include <stdio.h>
int main(void) {
    int a, d, k;
    double n;
    scanf("%d %d %d", &a, &d, &k);
    n = (k - a + d) / (double)d;
    if (n == (int)n && n > 0)
        printf("%d", (int)n);
    else
        printf("%s", "X");
    return 0;
}