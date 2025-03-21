#include <stdio.h>
int main(void) {
    int p, r;
    double v;
    scanf("%d %d", &p, &r);
    v = (double)p / r;
    if (v < 0.2)
        printf("weak");
    else if (0.2 <= v && v < 0.4)
        printf("normal");
    else if (0.4 <= v && v < 0.6)
        printf("strong");
    else
        printf("very strong");
    return 0;
}