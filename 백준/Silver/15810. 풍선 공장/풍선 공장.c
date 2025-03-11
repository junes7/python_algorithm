#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, *arr;
    long long start, end, mid, s, maxn = 0, r = 0;
    scanf("%d %d", &n, &m);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (maxn < arr[i])
            maxn = arr[i];
    }
    start = 0, end = maxn * m;
    while (start <= end) {
        mid = (start + end) / 2;
        s = 0;
        for (int i = 0; i < n; i++)
            s += mid / arr[i];
        if (s < m) {
            start = mid + 1;
        } else {
            end = mid - 1;
            r = mid;
        }
    }
    printf("%lld", r);
    return 0;
}