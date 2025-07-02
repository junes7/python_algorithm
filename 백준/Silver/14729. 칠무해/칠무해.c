#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const double a = *(double *)pa;
    const double b = *(double *)pb;
    return a > b;
}
int main(void) {
    int n;
    double *arr;
    scanf("%d", &n);
    arr = (double *)malloc(sizeof(double) * n);
    for (int i = 0; i < n; i++)
        scanf("%lf", &arr[i]);
    qsort(arr, n, sizeof(double), cmp);
    for (int i = 0; i < 7; i++)
        printf("%.3lf\n", arr[i]);
    return 0;
}