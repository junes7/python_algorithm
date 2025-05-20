#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, rlt, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    rlt = arr[n - 1];
    if (arr[2] - arr[1] == arr[1] - arr[0])
        rlt += arr[1] - arr[0];
    else if (arr[2] / arr[1] == arr[1] / arr[0])
        rlt *= arr[1] / arr[0];
    printf("%d", rlt);
    return 0;
}