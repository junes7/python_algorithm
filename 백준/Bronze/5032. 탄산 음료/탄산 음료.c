#include <stdio.h>
int main(void) {
    int e, f, c, t, cnt = 0;
    scanf("%d %d %d", &e, &f, &c);
    t = e + f;
    while (t >= c) {
        cnt += t / c;
        t = t / c + t % c;
    }
    printf("%d", cnt);
    return 0;
}