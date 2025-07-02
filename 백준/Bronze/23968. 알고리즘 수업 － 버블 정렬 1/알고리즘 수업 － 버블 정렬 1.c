#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, k, cnt = 0, temp, *arr;
    scanf("%d %d", &n, &k);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                if (cnt == k - 1) {
                    printf("%d %d", arr[j + 1], arr[j]);
                    return 0;
                }
                cnt += 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d", -1);
    return 0;
}