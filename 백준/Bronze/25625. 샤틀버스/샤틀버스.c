#include <stdio.h>
int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > y)
        printf("%d", y + x);
    else
        printf("%d", y - x);
    return 0;
}