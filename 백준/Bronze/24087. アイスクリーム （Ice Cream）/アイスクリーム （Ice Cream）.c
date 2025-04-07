#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void) {
    int l = 0, total = 250, *arr = (int*)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    while (true) {
        if (l >= arr[0] - arr[1])
            break;
        l += arr[2];
        total += 100;
    }
    printf("%d", total);
    return 0;
}