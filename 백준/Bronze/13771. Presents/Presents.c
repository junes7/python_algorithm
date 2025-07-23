#include <stdio.h>
#include <stdlib.h>
void ascending(double *data, int n) {
    double tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}
int main(void) {
    int n;
    scanf("%d", &n);
    double *arr = (double *)malloc(sizeof(double) * n);
    for (int i = 0; i < n; i++)
        scanf("%lf", &arr[i]);
    ascending(arr, n);
    printf("%.2f", arr[1]);
    return 0;
}