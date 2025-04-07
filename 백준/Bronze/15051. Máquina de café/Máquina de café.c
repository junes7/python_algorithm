#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 3);
    int *r = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    r[0] = arr[1] * 2 + arr[2] * 4;
    r[1] = (arr[0] + arr[2]) * 2;
    r[2] = arr[0] * 4 + arr[1] * 2;
    printf("%d", r[0] < r[1] ? (r[0] < r[2] ? r[0] : r[2]) : (r[1] < r[2] ? r[1] : r[2]));
    return 0;
}