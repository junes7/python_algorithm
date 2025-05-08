#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int compare(const void* pa, const void* pb) {
    const int* a = *(int**)pa;
    const int* b = *(int**)pb;
    if (a[1] == b[1] && a[2] == b[2] && a[3] == b[3]) return a[0] > b[0];
    if (a[1] == b[1] && a[2] == b[2]) return a[3] < b[3];
    if (a[1] == b[1]) return a[2] < b[2];
    return a[1] < b[1];
}
int main(void) {
    int n, k, **medals;
    bool flag;
    scanf("%d %d", &n, &k);
    medals = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        medals[i] = (int*)malloc(sizeof(int) * 4);
        for (int j = 0; j < 4; j++)
            scanf("%d", &medals[i][j]);
    }
    qsort(medals, n, sizeof(int*), compare);
    for (int i = 0; i < n; i++) {
        if (medals[i][0] == k) {
            for (int j = 0; j < n; j++) {
                flag = true;
                for (int k = 1; k < 4; k++) {
                    if (medals[i][k] != medals[j][k]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    printf("%d", j + 1);
                    break;
                }
            }
        }
    }
    return 0;
}