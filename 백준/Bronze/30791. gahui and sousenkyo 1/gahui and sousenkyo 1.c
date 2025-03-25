#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, cnt = 0;
    scanf("%d", &t);
    int *arr = (int *)malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        if (abs(arr[i] - t) <= 1000) cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}