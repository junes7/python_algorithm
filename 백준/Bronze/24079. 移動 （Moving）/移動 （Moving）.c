#include <stdio.h>
int main(void) {
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("%d", x + y <= z + 0.5 ? 1 : 0);
    return 0;
}