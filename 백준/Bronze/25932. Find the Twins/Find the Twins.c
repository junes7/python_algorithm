#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, idx, *arr, *rlt;
    arr = (int*)malloc(sizeof(int) * 10);
    rlt = (int*)malloc(sizeof(int) * 2);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        idx = 0;
        memset(rlt, 0, sizeof(int) * 2);
        for (int j = 0; j < 10; j++) {
            scanf("%d", &arr[j]);
            printf("%d ", arr[j]);
            if (arr[j] == 17 || arr[j] == 18) {
                rlt[idx++] = arr[j];
            }
        }
        printf("\n");
        if (idx == 2)
            printf("%s\n\n", "both");
        else if (idx == 1)
            printf("%s\n\n", rlt[0] == 17 ? "zack" : "mack");
        else
            printf("%s\n\n", "none");
    }
    return 0;
}