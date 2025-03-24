#include <stdio.h>
long long facto(int n) {
    return n <= 1 ? 1 : n * facto(n - 1);
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", facto(n) / (60 * 60 * 24 * 7));
    return 0;
}