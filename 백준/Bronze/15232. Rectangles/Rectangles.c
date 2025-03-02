#include <stdio.h>
int main(void) {
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}