#include <stdio.h>
int main(void) {
    double elem, last_elem;
    scanf("%lf", &last_elem);
    while (scanf("%lf", &elem) != EOF) {
        if (elem == 999) break;
        printf("%.2lf\n", elem - last_elem);
        last_elem = elem;
    }
    return 0;
}