#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s = 0, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    s += (n - 1) * 8;
    printf("%d %d", s / 24, s % 24);
    return 0;
}