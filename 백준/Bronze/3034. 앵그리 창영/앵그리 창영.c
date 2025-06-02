#include <math.h>
#include <stdio.h>
int main(void) {
    int n, h, w, elem;
    double d;
    scanf("%d %d %d", &n, &h, &w);
    d = sqrt(w * w + h * h);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        printf("%s\n", elem <= d ? "DA" : "NE");
    }
    return 0;
}