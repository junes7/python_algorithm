#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, st, maxn;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) break;
        int *arr = (int *)malloc(sizeof(int) * n);
        st = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (i < 3)
                st += arr[i];
        }
        maxn = st;
        for (int i = 0; i < n - 3; i++) {
            st = st - arr[i] + arr[i + 3];
            if (maxn < st)
                maxn = st;
        }
        printf("%d\n", maxn);
    }
    return 0;
}