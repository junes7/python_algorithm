#include <stdio.h>
int main(void) {
    int reg, small;
    scanf("%d", &reg);
    scanf("%d", &small);
    printf("%d", reg * 8 + small * 3 - 28);
    return 0;
}