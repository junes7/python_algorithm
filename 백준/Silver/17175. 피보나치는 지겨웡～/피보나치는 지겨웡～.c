#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, *f;
    scanf("%d", &n);
    f = (int*)malloc(sizeof(int) * (n + 1));
    f[0] = 1, f[1] = 1;
    for (int i = 2; i < n + 1; i++)
        f[i] = (f[i - 1] + f[i - 2] + 1) % 1000000007;
    printf("%d", f[n]);
    return 0;
}