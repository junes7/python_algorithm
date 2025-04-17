#include <stdio.h>
int main(void) {
    int w, h, n, a, b, rlt;
    scanf("%d %d", &w, &h);
    scanf("%d %d %d", &n, &a, &b);
    rlt = (w / a) * (h / b);
    if (w < a || h < b)
        printf("%d", -1);
    else
        printf("%d", n % rlt == 0 ? n / rlt : n / rlt + 1);
    return 0;
}