#include <math.h>
#include <stdio.h>
int main(void) {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        printf("%d\n", (int)pow(2, n) - 1);
    }
    return 0;
}