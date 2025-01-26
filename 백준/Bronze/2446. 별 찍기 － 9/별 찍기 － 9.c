#include <stdio.h>
int main(void) {
    int n, end, med;
    scanf("%d", &n);
    end = 2 * n - 1;
    med = end / 2;
    for (int i = 0; i < end; i++) {
        if (i <= med) {
            for (int j = 0; j < i; j++)
                printf(" ");
            for (int j = i; j < end - i; j++)
                printf("*");
        } else {
            for (int j = 0; j < med * 2 - i; j++)
                printf(" ");
            for (int j = med * 2 - i; j < end - (med * 2 - i); j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}