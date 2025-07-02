#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, k, t, cnt = 0, temp, *arr;
    scanf("%d %d", &n, &k);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                cnt += 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                if (cnt == k) {
                    for (int t = 0; t < n; t++)
                        printf("%d ", arr[t]);
                    return 0;
                }
            }
        }
    }
    printf("%d", -1);
    return 0;
}