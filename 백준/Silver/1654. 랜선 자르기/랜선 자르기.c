#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int k, n, cnt;
    long long left = 1, right = 1, mid;
    scanf("%d %d", &k, &n);
    long *lines = (long *)malloc(sizeof(long) * k);
    for (int i = 0; i < k; i++) {
        scanf("%ld", &lines[i]);
        if (right < lines[i])
            right = lines[i];
    }
    while (left <= right) {
        cnt = 0;
        mid = (left + right) / 2;
        for (int i = 0; i < k; i++) {
            cnt += lines[i] / mid;
        }
        if (cnt < n)
            right = mid - 1;
        else
            left = mid + 1;
    }
    printf("%lld", right);
    return 0;
}