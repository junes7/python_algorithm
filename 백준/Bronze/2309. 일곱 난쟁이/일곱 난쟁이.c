#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int total = 0, *arr = (int *)malloc(sizeof(int) * 9);
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    qsort(arr, 9, sizeof(int), compare);
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (total - (arr[i] + arr[j]) == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j)
                        printf("%d\n", arr[k]);
                }
                return 0;
            }
        }
    }
    return 0;
}