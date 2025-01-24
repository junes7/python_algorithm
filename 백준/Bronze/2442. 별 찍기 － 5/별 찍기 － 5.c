#include <stdio.h>

int main(void) {
    int n, end, med;
    scanf("%d", &n);
    end = 2 * n - 1;
    med = end / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < med - i; j++)
            printf(" ");
        for (int j = med - i; j < end - (med - i); j++)
            printf("*");
        printf("\n");
    }
    return 0;
}