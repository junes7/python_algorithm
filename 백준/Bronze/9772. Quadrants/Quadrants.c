#include <stdio.h>
int main(void) {
    double x, y;
    while (scanf("%lf %lf", &x, &y) != EOF) {
        if (x == 0 || y == 0)
            printf("AXIS\n");
        else
            printf("%s\n", x > 0 ? (y > 0 ? "Q1" : "Q4") : (y > 0 ? "Q2" : "Q3"));
    }
    return 0;
}