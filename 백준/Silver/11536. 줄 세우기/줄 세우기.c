#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp1(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int cmp2(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(b, a);
}
int main(void) {
    int n;
    scanf("%d", &n);
    bool flag_inc = true, flag_dec = true;
    char **arr = (char **)malloc(sizeof(char *) * n);
    char **arr_copy = (char **)malloc(sizeof(char *) * n);
    char **arr_dec_copy = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(sizeof(char) * 13);
        arr_copy[i] = (char *)malloc(sizeof(char) * 13);
        arr_dec_copy[i] = (char *)malloc(sizeof(char) * 13);
        scanf("%s", arr[i]);
        arr_copy[i] = arr[i];
        arr_dec_copy[i] = arr[i];
    }
    qsort(arr_copy, n, sizeof(char *), cmp1);
    qsort(arr_dec_copy, n, sizeof(char *), cmp2);
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i], arr_copy[i]) != 0)
            flag_inc = false;
        if (strcmp(arr[i], arr_dec_copy[i]) != 0)
            flag_dec = false;
    }
    printf("%s", flag_inc && !flag_dec ? "INCREASING" : (!flag_inc && flag_dec ? "DECREASING" : "NEITHER"));
    return 0;
}