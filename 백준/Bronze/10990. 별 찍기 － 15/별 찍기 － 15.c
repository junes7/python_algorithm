#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
        printf(" ");
    printf("*\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 2 - i; j++)
            printf(" ");
        printf("*");
        for (int j = 0; j < i * 2 + 1; j++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}