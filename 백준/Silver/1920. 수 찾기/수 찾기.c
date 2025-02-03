#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int binarySearch(int *arr, int left, int right, int target) {
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}
int main(void) {
    int n, m;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &m);
    int *tar = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
        scanf("%d", &tar[i]);
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < m; i++) {
        printf("%d\n", binarySearch(arr, 0, n - 1, tar[i]));
    }
    return 0;
}