#include <stdio.h>

int main(void) {
    int n, len;
    scanf("%d", &n);
    len = 2 * n - 1;
    for (int i = 0; i < len; i++) {
        if (i <= len / 2) {
            for (int j = 0; j < len / 2 - i; j++)
                printf(" ");
            for (int j = len / 2 - i; j < len - (len / 2 - i); j++)
                printf("*");
        } else if (i > len / 2) {
            for (int j = 0; j < i - len / 2; j++)
                printf(" ");
            for (int j = i - len / 2; j < len + (len / 2 - i); j++)
                printf("*");
        }
        if (i < len - 1)
            printf("\n");
    }
    return 0;
}