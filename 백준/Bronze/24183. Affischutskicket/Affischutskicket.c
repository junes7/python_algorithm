#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *type = (int *)malloc(sizeof(int) * 3);
    int size[3][3] = {{229, 324, 2}, {297, 420, 2}, {210, 297, 1}};
    double total = 0.0;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &type[i]);
        total += (type[i] * size[i][0] * size[i][1] / pow(10, 6)) * size[i][2];
    }
    printf("%.6f", total);
    return 0;
}