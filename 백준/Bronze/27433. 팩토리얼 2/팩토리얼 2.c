#include <stdio.h>
long long facto(int n) {
    if (n < 2)
        return 1;
    else
        return n * facto(n - 1);
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%lld", facto(n));
}