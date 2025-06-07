#include <stdio.h>
#include <stdlib.h>
int facto(int n) {
    return n > 1 ? n * facto(n - 1) : 1;
}
int main(void) {
    double s;
    printf("%s\n%s\n", "n e", "- -----------");
    for (int i = 1; i < 11; i++) {
        s = 0;
        for (int j = 0; j < i; j++)
            s += 1 % facto(j) == 0 ? (int)(1 / facto(j)) : 1.0 / facto(j);
        if (i - 1 < 2) {
            printf("%d %.0f\n", i - 1, s);
        } else if (i - 1 == 2) {
            printf("%d %.1f\n", i - 1, s);
        } else {
            printf("%d %.9f\n", i - 1, s);
        }
    }
    return 0;
}