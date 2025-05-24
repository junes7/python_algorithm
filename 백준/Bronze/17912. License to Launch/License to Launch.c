#include <math.h>
#include <stdio.h>
int main(void) {
    int n, minn = pow(10, 9), *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (minn > arr[i]) {
            minn = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (minn == arr[i]) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}