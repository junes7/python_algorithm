#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int t, n, *arr = (int *)malloc(sizeof(int) * 2);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 2; j++)
            scanf("%d", &arr[j]);
        scanf("%d", &n);
        printf("Data set: %d %d %d\n", arr[0], arr[1], n);
        for (int j = 0; j < n; j++) {
            if (arr[0] > arr[1])
                arr[0] /= 2;
            else
                arr[1] /= 2;
        }
        qsort(arr, 2, sizeof(int), compare);
        printf("%d %d\n\n", arr[0], arr[1]);
    }
    return 0;
}