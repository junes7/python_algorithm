#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n, k, s, *arr;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &k);
        s = 0;
        arr = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            s += arr[j] / k;
        }
        printf("%d\n", s);
    }
    return 0;
}