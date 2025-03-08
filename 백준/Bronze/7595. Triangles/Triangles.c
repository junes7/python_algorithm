#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n;
    while (true) {
        scanf("%d", &n);
        if (n == 0) break;
        for (int i = 1; i < n + 1; i++) {
            for (int j = 0; j < i; j++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}