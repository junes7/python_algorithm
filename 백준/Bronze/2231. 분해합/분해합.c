#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int digit_sum(int num) {
    int total = 0;
    while (num > 0) {
        total += num % 10;
        num /= 10;
    }
    return total;
}
int main(void) {
    int n, rlt = 0, len;
    scanf("%d", &n);
    char *st = (char *)malloc(sizeof(char) * 7);
    sprintf(st, "%d", n);
    len = n - strlen(st) * 9;
    for (int i = 1 < len ? len : 1; i < n; i++) {
        if (i + digit_sum(i) == n) {
            rlt = i;
            break;
        }
    }
    printf("%d", rlt);
    return 0;
}