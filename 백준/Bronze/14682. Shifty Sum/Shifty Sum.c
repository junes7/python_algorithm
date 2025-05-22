#include <math.h>
#include <stdio.h>
int main(void) {
    int n, k, m = 10, rlt;
    scanf("%d", &n);
    scanf("%d", &k);
    rlt = n;
    for (int i = 1; i < k + 1; i++)
        rlt += n * pow(m, i);
    printf("%d", rlt);
    return 0;
}