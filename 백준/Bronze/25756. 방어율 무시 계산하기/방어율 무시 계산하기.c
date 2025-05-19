#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, *arr;
    scanf("%d", &n);
    double v = 0.0;
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        v = (1 - (1 - v / 100.0) * (1 - arr[i] / 100.0)) * 100;
        printf("%.6lf\n", v);
    }
    return 0;
}