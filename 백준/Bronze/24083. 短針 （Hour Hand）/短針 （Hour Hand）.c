#include <stdio.h>
int main(void) {
    int a, b, val;
    scanf("%d %d", &a, &b);
    val = (a + b) % 12;
    printf("%d", val == 0 ? 12 : val);
    return 0;
}