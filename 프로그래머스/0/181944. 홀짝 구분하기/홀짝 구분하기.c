#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    printf((a%2==0)?"%d is even":"%d is odd",a);
    return 0;
}