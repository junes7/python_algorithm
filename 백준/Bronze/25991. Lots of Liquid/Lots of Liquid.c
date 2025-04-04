#include <math.h>
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    double area, *arr = (double*)malloc(sizeof(double) * n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        area += pow(arr[i], 3);
    }
    printf("%.6lf", pow(area, 1.0 / 3));
    return 0;
}