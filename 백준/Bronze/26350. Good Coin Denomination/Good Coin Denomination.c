#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n, *arr;
    scanf("%d", &t);
    bool flag;
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        flag = true;
        arr = (int*)malloc(sizeof(int) * n);
        printf("Denominations: ");
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            printf("%d ", arr[j]);
        }
        printf("\n");
        for (int j = 1; j < n; j++) {
            if ((arr[j - 1] << 1) > arr[j]) {
                flag = false;
                break;
            }
        }
        printf("%s\n\n", flag ? "Good coin denominations!" : "Bad coin denominations!");
    }
    return 0;
}