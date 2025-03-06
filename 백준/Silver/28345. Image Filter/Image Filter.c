#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, r, c, A, B, C, minn, idx, *temp, **arr, **rlt;
    temp = (int*)malloc(sizeof(int) * 5);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &r, &c);
        arr = (int**)malloc(sizeof(int*) * r);
        rlt = (int**)malloc(sizeof(int*) * r);
        for (int j = 0; j < r; j++) {
            arr[j] = (int*)malloc(sizeof(int) * c);
            for (int k = 0; k < c; k++) {
                scanf("%d", &arr[j][k]);
            }
        }
        for (int j = 0; j < r; j++) {
            rlt[j] = (int*)malloc(sizeof(int) * (c * 2));
            idx = 0;
            for (int k = 0; k < c; k++) {
                A = 0, B = 0, C = 0, minn = pow(2, 16);
                if (j == 0 && k > 0) {
                    A = arr[j][k - 1];
                } else if (j > 0 && k == 0) {
                    B = arr[j - 1][k];
                } else if (j > 0 && k > 0) {
                    A = arr[j][k - 1];
                    B = arr[j - 1][k];
                    C = arr[j - 1][k - 1];
                }
                temp[0] = arr[j][k] - 0;
                temp[1] = arr[j][k] - A;
                temp[2] = arr[j][k] - B;
                temp[3] = arr[j][k] - (A + B) / 2;
                temp[4] = arr[j][k] - (A + B - C);
                for (int l = 0; l < 5; l++) {
                    if (minn > abs(temp[l]))
                        minn = abs(temp[l]);
                }
                for (int l = 0; l < 5; l++) {
                    if (minn == abs(temp[l])) {
                        rlt[j][idx++] = l;
                        rlt[j][idx++] = temp[l];
                        break;
                    }
                }
            }
        }
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c * 2; k++) {
                printf("%d ", rlt[j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}