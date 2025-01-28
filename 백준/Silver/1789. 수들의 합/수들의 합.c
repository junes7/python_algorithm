#include <stdio.h>
int main(void) {
    long s, i = 1;
    scanf("%ld", &s);
    while (s >= i)
        s -= i++;
    printf("%d", i - 1);
}