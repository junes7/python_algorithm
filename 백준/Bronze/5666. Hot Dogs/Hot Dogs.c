#include <stdio.h>
int main(void) {
    int h, p;
    while (scanf("%d %d", &h, &p) != EOF) {
        printf("%.2f\n", (double)h / p);
    }
    return 0;
}