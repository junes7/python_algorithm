#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, maxn, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * 5);
    for (int i = 1; i < n + 1; i++) {
        maxn = 0;
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[j]);
            if (maxn < arr[j])
                maxn = arr[j];
        }
        printf("Case #%d: %d\n", i, maxn);
    }
    return 0;
}