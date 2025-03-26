#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, maxn = 0, cnt = 0, idx = 0, *arr, *called;
    bool flag;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (maxn < arr[i])
            maxn = arr[i];
    }
    called = (int*)malloc(sizeof(int) * maxn);
    for (int i = 1; i < maxn + 1; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= arr[j]) {
                flag = true;
                for (int k = 0; k < idx; k++) {
                    if (called[k] == i) {
                        flag = false;
                        cnt += 1;
                        break;
                    }
                }
                if (flag)
                    called[idx++] = i;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}