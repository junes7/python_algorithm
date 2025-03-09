#include <stdio.h>
int main(void) {
    double x;
    while (scanf("%lf", &x) != EOF) {
        if (x == -1.0) break;
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", x, x * 0.167);
    }
    return 0;
}