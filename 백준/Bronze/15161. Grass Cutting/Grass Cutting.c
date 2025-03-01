#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, *rows, *cols, **arr;
    bool flagrow, flagcol;
    scanf("%d", &t);
    rows = (int*)malloc(sizeof(int) * 3);
    cols = (int*)malloc(sizeof(int) * 3);
    arr = (int**)malloc(sizeof(int*) * 10);
    for (int i = 0; i < 10; i++) {
        arr[i] = (int*)malloc(sizeof(int) * 10);
        for (int j = 0; j < 10; j++)
            arr[i][j] = 1;
    }
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++)
            scanf("%d", &rows[j]);
        for (int j = 0; j < 3; j++)
            scanf("%d", &cols[j]);
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                flagrow = false, flagcol = false;
                for (int l = 0; l < 3; l++) {
                    if (j + 1 == rows[l]) {
                        flagrow = true;
                        break;
                    }
                }
                for (int l = 0; l < 3; l++) {
                    if (k + 1 == cols[l]) {
                        flagcol = true;
                        break;
                    }
                }
                if (flagrow) {
                    arr[j][k] = 1;
                } else if (flagcol) {
                    arr[j][k] = 1;
                } else {
                    arr[j][k] += 1;
                }
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}