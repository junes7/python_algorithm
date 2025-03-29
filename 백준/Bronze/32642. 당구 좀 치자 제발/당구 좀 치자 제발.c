#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    long long ang = 0, s = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        ang = arr[i] == 1 ? ang + 1 : ang - 1;
        s += ang;
    }
    printf("%lld", s);
    return 0;
}