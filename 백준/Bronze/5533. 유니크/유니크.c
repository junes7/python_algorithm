#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, total, cnt, *arr, **score;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * 3);
    score = (int**)malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++)
        score[i] = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[j]);
            score[j][i] = arr[j];
        }
    }
    for (int i = 0; i < n; i++) {
        total = 0;
        for (int j = 0; j < 3; j++) {
            cnt = 0;
            for (int k = 0; k < n; k++) {
                if (score[j][i] == score[j][k])
                    cnt += 1;
            }
            if (cnt == 1) {
                total += score[j][i];
            }
        }
        printf("%d\n", total);
    }
    return 0;
}