#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, *arr, *accum, idx = 0, total = 0;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    accum = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    accum[idx++] = arr[0];
    for (int i = 1; i < n; i++)
        accum[idx++] = arr[i] == 0 ? 0 : accum[idx - 1] + 1;
    for (int i = 0; i < idx; i++)
        total += accum[i];
    printf("%d", total);
    return 0;
}