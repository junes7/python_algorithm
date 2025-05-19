#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int m, row = 0, col = 0;
    scanf("%d", &m);
    while (true) {
        if (row < col)
            row += 1;
        else
            col += 1;
        if (row * col >= m) break;
    }
    printf("%d %d", row, col);
    return 0;
}