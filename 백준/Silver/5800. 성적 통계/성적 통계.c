#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int k, n, maxdiff, maxn, minn, *arr;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &n);
        maxdiff = 0, maxn = 0, minn = 100;
        arr = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            if (maxn < arr[j])
                maxn = arr[j];
            if (minn > arr[j])
                minn = arr[j];
        }
        qsort(arr, n, sizeof(int), compare);
        for (int j = 0; j < n - 1; j++)
            if (maxdiff < arr[j] - arr[j + 1])
                maxdiff = arr[j] - arr[j + 1];
        printf("Class %d\n", i + 1);
        printf("Max %d, Min %d, Largest gap %d\n", maxn, minn, maxdiff);
    }
    return 0;
}