#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int total_x, total_y, *arr = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    total_x = arr[0] * arr[4];
    total_y = arr[1] + (arr[4] <= arr[2] ? 0 : (arr[4] - arr[2]) * arr[3]);
    printf("%d", total_x < total_y ? total_x : total_y);
    return 0;
}