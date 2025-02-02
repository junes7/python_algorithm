#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, start = 0, end = 0, sum_arr = 0, cnt = 0;
    scanf("%d %d", &n, &m);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    while (1) {
        if (m < sum_arr)
            sum_arr -= arr[start++];
        else {
            if (end == n)
                break;
            sum_arr += arr[end++];
        }
        if (m == sum_arr)
            cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}