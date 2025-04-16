#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n;
    bool res = false;
    scanf("%d", &n);
    for (int i = 1; i < 10; i++) {
        if (n % i == 0 && n / i <= 9) {
            res = true;
            break;
        }
    }
    printf("%d", res ? 1 : 0);
    return 0;
}