#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s, start = 0, end = 0, sum_arr, length;
    scanf("%d %d", &n, &s);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sum_arr = arr[0], length = n + 1;
    while (true) {
        if (sum_arr < s) {
            end += 1;
            if (end == n)
                break;
            sum_arr += arr[end];
        } else {
            length = length < end - start + 1 ? length : end - start + 1;
            sum_arr -= arr[start++];
        }
    }
    printf("%d", length == n + 1 ? 0 : length);
    return 0;
}