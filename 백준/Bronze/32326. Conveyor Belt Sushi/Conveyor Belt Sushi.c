#include <stdio.h>
int main(void) {
    int R, G, B;
    scanf("%d", &R);
    scanf("%d", &G);
    scanf("%d", &B);
    printf("%d", R * 3 + G * 4 + B * 5);
    return 0;
}