#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n, num;
    scanf("%d", &n);
    while (true) {
        scanf("%d", &num);
        if (num == 0) break;
        printf("%d is %sa multiple of %d.\n", num, num % n == 0 ? "" : "NOT ", n);
    }
    return 0;
}