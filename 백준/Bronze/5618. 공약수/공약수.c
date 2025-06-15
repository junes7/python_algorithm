#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y) {
    return x % y == 0 ? y : gcd(y, x % y);
}
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, temp, idx = 0, *arr, *rlt;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    temp = arr[0];
    for (int i = 1; i < n; i++)
        temp = gcd(temp, arr[i]);
    rlt = (int *)malloc(sizeof(int) * sqrt(temp));
    for (int i = 1; i < (int)sqrt(temp) + 1; i++) {
        if (temp % i == 0) {
            rlt[idx++] = i;
            if (i * i != temp)
                rlt[idx++] = temp / i;
        }
    }
    qsort(rlt, idx, sizeof(int), cmp);
    for (int i = 0; i < idx; i++)
        printf("%d\n", rlt[i]);
    return 0;
}