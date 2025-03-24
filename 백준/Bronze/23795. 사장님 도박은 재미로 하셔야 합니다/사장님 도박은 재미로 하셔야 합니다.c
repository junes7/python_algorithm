#include <stdio.h>
int main(void) {
    int n, s = 0;
    while (scanf("%d", &n) != EOF) {
        if (n == -1) break;
        s += n;
    }
    printf("%d", s);
    return 0;
}