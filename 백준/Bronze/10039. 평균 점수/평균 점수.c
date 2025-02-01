#include <stdio.h>
int main(void) {
    int n, s = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n < 40) n = 40;
        s += n;
    }
    printf("%d", s / 5);
    return 0;
}