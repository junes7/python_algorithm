#include <stdio.h>
int main(void) {
    int n, k, rlt;
    while (scanf("%d %d", &n, &k) != EOF) {
        rlt = n;
        while (n / k) {
            rlt += n / k;
            n = n / k + n % k;
        }
        printf("%d\n", rlt);
    }
    return 0;
}