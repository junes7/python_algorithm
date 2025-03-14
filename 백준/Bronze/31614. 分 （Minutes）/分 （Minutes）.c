#include <stdio.h>
int main(void) {
    int h, m;
    scanf("%d", &h);
    scanf("%d", &m);
    printf("%d", h * 60 + m);
    return 0;
}