#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0, *arr;
    while (true) {
        scanf("%d", &n);
        if (n == 0) break;
        arr = (int*)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        printf("Case %d: %.1f\n", ++cnt, n % 2 != 0 ? (double)arr[n / 2] : (double)(arr[n / 2 - 1] + arr[n / 2]) / 2);
    }
    return 0;
}