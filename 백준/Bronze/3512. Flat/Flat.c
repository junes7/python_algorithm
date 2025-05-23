#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, c, a, t_area = 0, t_bed = 0;
    double t_price = 0;
    char *st = (char *)malloc(sizeof(char) * 9);
    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++) {
        scanf("%d %s", &a, st);
        if (strcmp(st, "bedroom") == 0)
            t_bed += a;
        t_area += a;
        t_price += (strcmp(st, "balcony") == 0 ? a / 2.0 : a) * c;
    }
    printf("%d\n%d\n%.6f", t_area, t_bed, t_price);
    return 0;
}