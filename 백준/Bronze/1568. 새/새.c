#include <stdio.h>
int main(void) {
    int n, cnt = 1, rlt = 0;
    scanf("%d", &n);
    while (n >= 1) {
        if (n < cnt) cnt = 1;
        n -= cnt;
        rlt += 1;
        cnt += 1;
    }
    printf("%d", rlt);
    return 0;
}