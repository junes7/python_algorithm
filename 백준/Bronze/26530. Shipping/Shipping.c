#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, x, quan;
    char *name = (char *)malloc(sizeof(char) * 10);
    double unit, total;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        total = 0.0;
        for (int j = 0; j < x; j++) {
            scanf("%s %d %lf", name, &quan, &unit);
            total += quan * unit;
        }
        printf("$%.2lf\n", total);
    }
    return 0;
}