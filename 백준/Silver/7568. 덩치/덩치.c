#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, rank, **arr;
    scanf("%d", &n);
    arr = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * 2);
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    for (int i = 0; i < n; i++) {
        rank = 1;
        for (int j = 0; j < n; j++) {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                rank += 1;
        }
        printf("%d ", rank);
    }
    return 0;
}