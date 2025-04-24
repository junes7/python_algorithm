#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, *arr, cnt[2] = {0, 0};
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        cnt[arr[i]] += 1;
    }
    printf("%s", cnt[0] > cnt[1] ? "Junhee is not cute!" : "Junhee is cute!");
    return 0;
}