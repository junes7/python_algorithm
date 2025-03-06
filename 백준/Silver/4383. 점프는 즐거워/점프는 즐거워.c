#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, *arr, *rlt;
    bool flag;
    while (scanf("%d", &n) != EOF) {
        arr = (int *)malloc(sizeof(int) * n);
        rlt = (int *)malloc(sizeof(int) * (n - 1));
        flag = true;
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < n - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) > n - 1) {
                flag = false;
                break;
            }
            rlt[i] = abs(arr[i] - arr[i + 1]);
        }
        if (flag) {
            qsort(rlt, n - 1, sizeof(int), compare);
            for (int i = 0; i < n - 2; i++) {
                if (i + 1 != rlt[i]) {
                    flag = false;
                    break;
                }
            }
            printf("%s\n", flag ? "Jolly" : "Not jolly");
        } else {
            printf("%s\n", "Not jolly");
        }
    }
    return 0;
}