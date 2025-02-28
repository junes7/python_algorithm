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
    int *arr = (int *)malloc(sizeof(int) * 8);
    int *arr_copy = (int *)malloc(sizeof(int) * 8);
    int *arr_copy_rev = (int *)malloc(sizeof(int) * 8);
    bool flagasc, flagdes;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
        arr_copy[i] = arr[i];
        arr_copy_rev[i] = arr[i];
    }
    qsort(arr_copy, 8, sizeof(int), compare1);
    qsort(arr_copy_rev, 8, sizeof(int), compare2);
    flagasc = true, flagdes = true;
    for (int i = 0; i < 8; i++) {
        if (arr[i] != arr_copy[i])
            flagasc = false;
        if (arr[i] != arr_copy_rev[i])
            flagdes = false;
    }
    printf(flagasc ? "ascending" : (flagdes ? "descending" : "mixed"));
    return 0;
}