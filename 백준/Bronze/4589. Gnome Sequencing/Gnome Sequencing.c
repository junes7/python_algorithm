#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int compare1(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int compare2(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int n, *arr = (int *)malloc(sizeof(int) * 3);
    int arr_sort[3], arr_sort_rev[3];
    bool flag, flag_rev;
    scanf("%d", &n);
    printf("Gnomes:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
            arr_sort[j] = arr[j];
            arr_sort_rev[j] = arr[j];
        }
        qsort(arr_sort, 3, sizeof(int), compare1);
        qsort(arr_sort_rev, 3, sizeof(int), compare2);
        flag = true, flag_rev = true;
        for (int j = 0; j < 3; j++) {
            if (arr[j] != arr_sort[j]) {
                flag = false;
                break;
            }
        }
        for (int j = 0; j < 3; j++) {
            if (arr[j] != arr_sort_rev[j]) {
                flag_rev = false;
                break;
            }
        }
        printf("%s\n", flag || flag_rev ? "Ordered" : "Unordered");
    }
    return 0;
}