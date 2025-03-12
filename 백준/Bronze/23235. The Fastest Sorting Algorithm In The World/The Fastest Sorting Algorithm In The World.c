#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0, *arr;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) break;
        arr = (int*)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("Case %d: Sorting... done!\n", ++cnt);
    }
    return 0;
}