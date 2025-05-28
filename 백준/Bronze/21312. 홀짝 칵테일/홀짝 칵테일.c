#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int rlt = 1, *arr;
    bool isOdd = false;
    arr = (int*)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0) {
            rlt *= arr[i];
            isOdd = true;
        }
    }
    printf("%d", isOdd ? rlt : arr[0] * arr[1] * arr[2]);
    return 0;
}