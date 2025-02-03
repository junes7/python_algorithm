#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, len = 0, left = 0, right = 0, sum_arr, cnt = 0;
    scanf("%d", &n);
    if (n == 1) {
        printf("%d", 0);
        return 0;
    }
    int *arr = (int *)malloc(sizeof(int) * n);
    bool *prime = (bool *)malloc(sizeof(bool) * (n + 1));
    for (int i = 0; i < n + 1; i++) {
        prime[i] = true;
    }
    prime[0] = false, prime[1] = false;
    for (int i = 2; i < n + 1; i++) {
        if (prime[i]) {
            arr[len++] = i;
            for (int j = i * 2; j < n + 1; j += i)
                prime[j] = false;
        }
    }
    sum_arr = arr[0];
    while (left <= right) {
        if (sum_arr <= n) {
            if (sum_arr == n)
                cnt += 1;
            right += 1;
            if (right == len)
                break;
            sum_arr += arr[right];
        } else if (sum_arr > n) {
            sum_arr -= arr[left++];
        }
    }
    printf("%d", cnt);
    return 0;
}