#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, idx, rlt;
    int *arr = (int *)malloc(sizeof(int) * 3);
    int *arr_copy = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 3; i++) {
        t = arr[i], idx = 0;
        for (int j = 0; j < 3; j++) {
            if (arr[j] != t)
                arr_copy[idx++] = arr[j];
        }
        if (t == arr_copy[0] + arr_copy[1]) {
            rlt = 1;
            break;
        } else if (t == arr_copy[0] * arr_copy[1]) {
            rlt = 2;
            break;
        } else {
            rlt = 3;
        }
    }
    printf("%d", rlt);
    return 0;
}