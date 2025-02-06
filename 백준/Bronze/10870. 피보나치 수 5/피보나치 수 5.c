#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    return n < 1 ? 0 : (n < 2 ? 1 : fibo(n - 1) + fibo(n - 2));
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}