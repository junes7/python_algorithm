#include <math.h>
#include <stdio.h>
int main(void) {
    int w, h;
    double r;
    scanf("%d %d", &w, &h);
    r = w + h - sqrt(pow(w, 2) + pow(h, 2));
    if (r == (int)r)
        printf("%.0f", r);
    else
        printf("%.9f", r);
    return 0;
}