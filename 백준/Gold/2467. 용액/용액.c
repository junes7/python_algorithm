#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, left, right, rst, rsta, rstb, temp;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    left = 0, right = n - 1;
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
        if (temp < 0)
            left += 1;
        else
            right -= 1;
    }
    printf("%d %d", rsta, rstb);
    return 0;
}