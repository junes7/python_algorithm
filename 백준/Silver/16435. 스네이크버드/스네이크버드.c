#include <stdio.h>
#include <stdlib.h>
void ascending(int *data, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}
int main(void) {
    int n, l, *arr;
    scanf("%d %d", &n, &l);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    ascending(arr, n);
    for (int i = 0; i < n; i++) {
        if (arr[i] <= l)
            l += 1;
        else
            break;
    }
    printf("%d", l);
    return 0;
}