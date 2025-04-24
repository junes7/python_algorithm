#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int total, cnt[2] = {0, 0};
    int *arr = (int *)malloc(sizeof(int) * 4);
    for (int i = 0; i < 5; i++) {
        total = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
            total += arr[j];
        }
        if (cnt[1] < total) {
            cnt[0] = i + 1;
            cnt[1] = total;
        }
    }
    printf("%d %d", cnt[0], cnt[1]);
    return 0;
}