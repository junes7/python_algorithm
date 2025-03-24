#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, elem, maxn = 0, pow_m = 0, elected, cnt_max = 0, cnt_pow_m = 0;
    scanf("%d", &n);
    int *total = (int *)malloc(sizeof(int) * 3);
    memset(total, 0, sizeof(int) * 3);
    int *squared = (int *)malloc(sizeof(int) * 3);
    memset(squared, 0, sizeof(int) * 3);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &elem);
            total[j] += elem;
            squared[j] += pow(elem, 2);
        }
    }
    for (int i = 0; i < 3; i++) {
        if (maxn < total[i])
            maxn = total[i];
        if (pow_m < squared[i])
            pow_m = squared[i];
    }
    for (int i = 0; i < 3; i++) {
        if (maxn == total[i])
            cnt_max += 1;
        if (pow_m == squared[i])
            cnt_pow_m += 1;
    }
    if (cnt_max == 1) {
        for (int i = 0; i < 3; i++) {
            if (total[i] == maxn) {
                printf("%d %d", i + 1, maxn);
                break;
            }
        }
    } else {
        elected = 0;
        for (int i = 0; i < 3; i++) {
            if (squared[i] == pow_m) {
                elected = i;
                break;
            }
        }
        printf("%d %d", cnt_pow_m > 1 ? 0 : elected + 1, total[elected]);
    }
    return 0;
}