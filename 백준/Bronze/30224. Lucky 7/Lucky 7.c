#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n, t, r;
    bool flag = false;
    scanf("%d", &n);
    t = n;
    while (t > 0) {
        if (t % 10 == 7) {
            flag = true;
            break;
        }
        t /= 10;
    }
    if (!flag && n % 7 != 0)
        r = 0;
    else if (!flag && n % 7 == 0)
        r = 1;
    else if (flag && n % 7 != 0)
        r = 2;
    else if (flag && n % 7 == 0)
        r = 3;
    printf("%d", r);
    return 0;
}