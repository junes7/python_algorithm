#include <stdio.h>

int main(void) {
    int a, b, cnt = 1;
    scanf("%d %d", &a, &b);
    while (b > a) {
        if (b % 2 != 0 && b % 10 != 1)
            break;
        b = b % 10 == 1 ? (b - 1) / 10 : b / 2;
        cnt += 1;
    }
    printf("%d", b == a ? cnt : -1);
    return 0;
}