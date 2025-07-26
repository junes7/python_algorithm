#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n, rlt, *arr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        arr = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[j]);
        rlt = 0;
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[j] > arr[k])
                    rlt += 1;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", rlt);
    }
    return 0;
}