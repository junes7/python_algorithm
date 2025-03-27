#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, k, p, *arr, *rank;
    scanf("%d %d", &n, &k);
    arr = (int*)malloc(sizeof(int) * k);
    rank = (int*)malloc(sizeof(int) * k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &arr[i]);
        p = arr[i] * 100 / n;
        if (p <= 4)
            rank[i] = 1;
        else if (4 < p && p <= 11)
            rank[i] = 2;
        else if (11 < p && p <= 23)
            rank[i] = 3;
        else if (23 < p && p <= 40)
            rank[i] = 4;
        else if (40 < p && p <= 60)
            rank[i] = 5;
        else if (60 < p && p <= 77)
            rank[i] = 6;
        else if (77 < p && p <= 89)
            rank[i] = 7;
        else if (89 < p && p <= 96)
            rank[i] = 8;
        else if (96 < p && p <= 100)
            rank[i] = 9;
    }
    for (int i = 0; i < k; i++)
        printf("%d ", rank[i]);
    return 0;
}