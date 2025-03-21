#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, d, s = 0, *arr;
    scanf("%d %d", &n, &d);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        s += arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i] * d / s);
    }
    return 0;
}