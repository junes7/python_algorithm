#include <stdio.h>
int main(void) {
    int num, cnt = 0;
    scanf("%d", &num);
    while (num >= 0) {
        if (num % 5 == 0) {
            cnt += num / 5;
            printf("%d", cnt);
            break;
        }
        cnt += 1;
        num -= 3;
    }
    if (num < 0) printf("%d", -1);
    return 0;
}