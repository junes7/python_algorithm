#include <stdio.h>
int main(void) {
    int n, rlt = 1, a = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        rlt += a;
        if (i % 2 == 0) a += 1;
    }
    printf("%d", rlt);
    return 0;
}