#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n;
    long long k, d, a, rlt, scr, **arr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        arr = (long long**)malloc(sizeof(long long*) * n);
        for (int j = 0; j < n; j++) {
            arr[j] = (long long*)malloc(sizeof(long long) * 3);
            for (int k = 0; k < 3; k++)
                scanf("%lld", &arr[j][k]);
        }
        rlt = 0;
        scanf("%lld %lld %lld", &k, &d, &a);
        for (int j = 0; j < n; j++) {
            scr = arr[j][0] * k - arr[j][1] * d + arr[j][2] * a;
            if (scr > 0) rlt += scr;
        }
        printf("%lld\n", rlt);
    }
    return 0;
}