#include <stdio.h>
#include <stdlib.h>
long find_kth_length(long n, long k) {
    long r = 0, mid, cnt, left = 1, right = n * n;
    while (left <= right) {
        mid = (left + right) / 2;
        cnt = 0;
        for (int i = 1; i < n + 1; i++)
            cnt += mid / i < n ? mid / i : n;
        if (cnt < k)
            left = mid + 1;
        else {
            r = mid;
            right = mid - 1;
        }
    }
    return r;
}
int main(void) {
    long n, k;
    scanf("%ld", &n);
    scanf("%ld", &k);
    printf("%ld", find_kth_length(n, k));
    return 0;
}