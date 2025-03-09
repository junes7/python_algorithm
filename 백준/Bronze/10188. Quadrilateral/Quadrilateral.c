#include <stdio.h>
int main(void) {
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < x; k++)
                printf("X");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}