#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - (n / 2); j++)
            printf("* ");
        printf("\n");
        for (int j = 0; j < n / 2; j++)
            printf(" *");
        printf("\n");
    }
    return 0;
}