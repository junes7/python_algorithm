#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int t, total, *arr;
    scanf("%d", &t);
    arr = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 5; j++)
            scanf("%d", &arr[j]);
        qsort(arr, 5, sizeof(int), cmp);
        if (arr[3] - arr[1] >= 4)
            printf("%s\n", "KIN");
        else {
            total = 0;
            for (int i = 1; i < 4; i++)
                total += arr[i];
            printf("%d\n", total);
        }
    }
    return 0;
}