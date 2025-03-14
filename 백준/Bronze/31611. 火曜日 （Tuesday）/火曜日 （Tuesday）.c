#include <stdio.h>
int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", (1 + x) % 7 == 3 ? 1 : 0);
    return 0;
}