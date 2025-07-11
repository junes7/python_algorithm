#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, cnt = 0, tar = 0, idx = 0, maxn = 0, *arr;
    scanf("%d", &n);
    scanf("%d", &tar);
    arr = (int*)malloc(sizeof(int) * (n - 1));
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        if (maxn < arr[i])
            maxn = arr[i];
    }
    if (n == 1) {
        printf("%d", cnt);
        return 0;
    }
    while (tar <= maxn) {
        tar += 1;
        cnt += 1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == maxn) {
                arr[i] -= 1;
                break;
            }
        }
        maxn = 0;
        for (int i = 0; i < n - 1; i++) {
            if (maxn < arr[i])
                maxn = arr[i];
        }
    }
    printf("%d", cnt);
    return 0;
}