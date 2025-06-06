#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char* st = (char*)malloc(sizeof(char) * 1001);
    char* t = (char*)malloc(sizeof(char) * 1001);
    int len, idx = 0;
    char grd[9][3] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
    double total = 0, *arr, grd_num[9] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
    arr = (double*)malloc(sizeof(double) * 1001);
    scanf("%s", st);
    len = strlen(st);
    for (int i = 0; i < len - 1; i++) {
        if (st[i] == '+') continue;
        t[0] = st[i];
        if (st[i + 1] == '+') {
            t[1] = '+';
            t[2] = '\0';
        } else {
            t[1] = '\0';
        }
        for (int j = 0; j < 9; j++) {
            if (strcmp(grd[j], t) == 0) {
                arr[idx++] = grd_num[j];
                break;
            }
        }
    }
    if (st[len - 1] != '+') {
        t[0] = st[len - 1];
        t[1] = '\0';
        for (int j = 0; j < 9; j++) {
            if (strcmp(grd[j], t) == 0) {
                arr[idx++] = grd_num[j];
                break;
            }
        }
    }
    for (int i = 0; i < idx; i++)
        total += arr[i];
    printf("%.4f", total / idx);
    return 0;
}