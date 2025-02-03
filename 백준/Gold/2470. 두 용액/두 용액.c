#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, left = 0, right, rst, rsta, rstb, temp;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);
    right = n - 1;
    rst = abs(arr[left] + arr[right]);
    rsta = arr[left];
    rstb = arr[right];
    while (left < right) {
        temp = arr[left] + arr[right];
        if (abs(temp) < rst) {
            rst = abs(temp);
            rsta = arr[left];
            rstb = arr[right];
        }
        if (temp > 0)
            right -= 1;
        else
            left += 1;
    }
    printf("%d %d", rsta, rstb);
    return 0;
}