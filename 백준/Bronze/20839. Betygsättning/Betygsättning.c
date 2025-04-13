#include <stdio.h>
int main(void) {
    int x, y, z, x1, y1, z1;
    scanf("%d %d %d", &x, &y, &z);
    scanf("%d %d %d", &x1, &y1, &z1);
    if (z1 == z)
        if (y1 < (y + 1) / 2)
            printf("E");
        else if ((y + 1) / 2 <= y1 && y1 < y)
            printf("D");
        else if (y1 == y) {
            if (x1 < (x + 1) / 2)
                printf("C");
            else if ((x + 1) / 2 <= x1 && x1 < x)
                printf("B");
            else if (x1 == x)
                printf("A");
        }
    return 0;
}