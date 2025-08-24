#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, idx = 0, *arr, *rlt, cnt = 0;
    bool flag;
    scanf("%d %d", &n, &m);
    arr = (int*)malloc(sizeof(int) * m);
    rlt = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr[i]);
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < m; j++) {
            if (i % arr[j] == 0) {
                flag = true;
                for (int k = 0; k < idx; k++) {
                    if (rlt[k] == i) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    rlt[idx++] = i;
                    cnt += i;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}