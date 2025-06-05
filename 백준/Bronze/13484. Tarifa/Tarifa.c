#include <stdio.h>
int main(void) {
    int x, n, p, rlt = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p);
        rlt += x - p;
    }
    rlt += x;
    printf("%d", rlt);
    return 0;
}