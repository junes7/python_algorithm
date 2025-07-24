#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    return a[0] - b[0];
}
int main(void) {
    int tar, time = 0, **arr;
    arr = (int **)malloc(sizeof(int *) * 3);
    for (int i = 0; i < 3; i++) {
        arr[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    scanf("%d", &tar);
    qsort(arr, 3, sizeof(int *), cmp);
    while (1) {
        for (int i = 0; i < 3; i++) {
            if (time % arr[i][0] == 0) {
                tar -= arr[i][1];
            }
        }
        if (tar <= 0)
            break;
        else
            time += 1;
    }
    printf("%d", time);
    return 0;
}