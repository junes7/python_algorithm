#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int t;
    double n;
    char *st = (char *)malloc(sizeof(char) * 3);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%lf %s", &n, st);
        if (strcmp(st, "kg") == 0) {
            printf("%.4lf lb\n", n * 2.2046);
        } else if (strcmp(st, "lb") == 0) {
            printf("%.4lf kg\n", n * 0.4536);
        } else if (strcmp(st, "l") == 0) {
            printf("%.4lf g\n", n * 0.2642);
        } else {
            printf("%.4lf l\n", n * 3.7854);
        }
    }
    return 0;
}