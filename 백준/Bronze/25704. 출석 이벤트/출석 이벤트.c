#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, minn, p, idx = 0, *arr = (int*)malloc(sizeof(int) * 4);
    scanf("%d", &n);
    scanf("%d", &p);
    memset(arr, 0, sizeof(int) * 5);
    arr[0] = p;
    minn = p;
    if (n >= 20) {
        arr[idx++] = p * 0.75;
    }
    if (n >= 15) {
        arr[idx++] = p - 2000 < 0 ? 0 : p - 2000;
    }
    if (n >= 10) {
        arr[idx++] = p * 0.9;
    }
    if (n >= 5) {
        arr[idx++] = p - 500 < 0 ? 0 : p - 500;
    }

    for (int i = 0; i < idx; i++) {
        if (minn > arr[i])
            minn = arr[i];
    }
    printf("%d", minn);
    return 0;
}