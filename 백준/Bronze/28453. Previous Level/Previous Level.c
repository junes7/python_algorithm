#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    int *rank = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 300)
            rank[i] = 1;
        else if (arr[i] >= 275)
            rank[i] = 2;
        else if (arr[i] >= 250)
            rank[i] = 3;
        else
            rank[i] = 4;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", rank[i]);
    }
    return 0;
}