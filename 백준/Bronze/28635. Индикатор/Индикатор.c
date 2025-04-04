#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int cnt = 0, m, a, b;
    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);
    while (true) {
        if (a == b) break;
        if (a == m) a -= m;
        a += 1;
        cnt += 1;
    }
    printf("%d", cnt);
    return 0;
}