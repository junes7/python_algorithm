#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, x, s, max_sum, max_cnt;
    scanf("%d %d", &n, &x);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s);
        arr[i] = s;
    }
    s = 0;
    for (int i = 0; i < x; i++) {
        s += arr[i];
    }
    max_sum = s;
    max_cnt = 1;
    for (int i = x; i < n; i++) {
        s -= arr[i - x];
        s += arr[i];
        if (max_sum == s)
            max_cnt += 1;
        else if (max_sum < s) {
            max_sum = s;
            max_cnt = 1;
        }
    }
    if (max_sum == 0)
        printf("%s", "SAD");
    else
        printf("%d\n%d", max_sum, max_cnt);
    return 0;
}