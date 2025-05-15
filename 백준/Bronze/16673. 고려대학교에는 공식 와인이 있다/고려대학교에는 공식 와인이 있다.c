#include <stdio.h>
int main(void) {
    int c, k, p, total = 0;
    scanf("%d %d %d", &c, &k, &p);
    for (int i = 1; i < c + 1; i++)
        total += k * i + p * i * i;
    printf("%d", total);
    return 0;
}