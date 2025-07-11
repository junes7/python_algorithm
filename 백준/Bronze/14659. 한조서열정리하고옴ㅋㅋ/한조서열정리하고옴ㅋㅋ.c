#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, tar = 0, cnt = 0, maxn = 0, *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        if (tar < arr[i]) {
            tar = arr[i];
            cnt = 0;
        } else
            cnt += 1;
        if (maxn < cnt)
            maxn = cnt;
    }
    printf("%d", maxn);
    return 0;
}