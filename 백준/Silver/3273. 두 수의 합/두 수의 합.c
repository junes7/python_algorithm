#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, x, left = 0, right, sum_arr = 0, cnt = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    qsort(arr, n, sizeof(int), compare);
    right = n - 1;
    while (true) {
        if (left == right)
            break;
        sum_arr = arr[left] + arr[right];
        if (sum_arr <= x) {
            if (sum_arr == x)
                cnt += 1;
            sum_arr -= arr[left++];
        } else {
            sum_arr -= arr[right--];
        }
    }
    printf("%d", cnt);
}