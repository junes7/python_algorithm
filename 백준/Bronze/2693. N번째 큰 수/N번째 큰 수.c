#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int t, *arr = (int *)malloc(sizeof(int) * 10);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 10; j++)
            scanf("%d", &arr[j]);
        qsort(arr, 10, sizeof(int), compare);
        printf("%d\n", arr[2]);
    }
    return 0;
}