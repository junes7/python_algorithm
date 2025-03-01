#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, t, p, cnt = 0, *size = (int*)malloc(sizeof(int) * 6);
    scanf("%d", &n);
    for (int i = 0; i < 6; i++)
        scanf("%d", &size[i]);
    scanf("%d %d", &t, &p);
    for (int i = 0; i < 6; i++)
        cnt += (size[i] + t - 1) / t;
    printf("%d\n%d %d", cnt, n / p, n % p);
    return 0;
}