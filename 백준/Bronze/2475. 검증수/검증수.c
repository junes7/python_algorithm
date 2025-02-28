#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int total = 0, *arr = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        arr[i] = pow(arr[i], 2);
        total += arr[i];
    }
    printf("%d", total % 10);
    return 0;
}