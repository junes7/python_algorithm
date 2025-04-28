#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a, b, s = 1, m = 1, t, total;
    int **arra = (int **)malloc(sizeof(int *) * 6);
    int **arrb = (int **)malloc(sizeof(int *) * 5);
    int prizea[6] = {5000000, 3000000, 2000000, 500000, 300000, 100000};
    int prizeb[5] = {5120000, 2560000, 1280000, 640000, 320000};
    for (int i = 0; i < 6; i++) {
        arra[i] = (int *)malloc(sizeof(int) * 2);
        arra[i][0] = s;
        arra[i][1] = s + (i + 1);
        s += i + 1;
    }
    for (int i = 0; i < 5; i++) {
        arrb[i] = (int *)malloc(sizeof(int) * 2);
        arrb[i][0] = m;
        arrb[i][1] = m + pow(2, i);
        m += pow(2, i);
    }
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        total = 0;
        for (int j = 0; j < 6; j++) {
            if (arra[j][0] <= a && a < arra[j][1]) {
                total += prizea[j];
                break;
            }
        }
        for (int j = 0; j < 5; j++) {
            if (arrb[j][0] <= b && b < arrb[j][1]) {
                total += prizeb[j];
                break;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}