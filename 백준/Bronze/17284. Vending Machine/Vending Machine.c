#include <stdio.h>
int main(void) {
    int n, m = 5000;
    while (scanf("%d", &n) != EOF) {
        m -= (n == 1 ? 500 : (n == 2 ? 800 : 1000));
    }
    printf("%d", m);
    return 0;
}