#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, wgh = 0, cnt = 1, *arr;
    scanf("%d %d", &n, &m);
    if (n == 0) {
        printf("%d", 0);
        return 0;
    }
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = n - 1; i >= 0; i--) {
        wgh += arr[i];
        if (wgh > m) {
            wgh = arr[i];
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}