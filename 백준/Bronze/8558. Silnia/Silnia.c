#include <stdio.h>
int main(void) {
    int n, rlt = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        rlt = (rlt * i) % 10;
    printf("%d\n", rlt);
    return 0;
}