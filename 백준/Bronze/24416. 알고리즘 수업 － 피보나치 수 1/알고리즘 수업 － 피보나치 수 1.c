#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    int *f = (int *)malloc(sizeof(int) * (n + 1));
    f[1] = 1, f[2] = 1;
    for (int i = 3; i < n + 1; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int fibonacci(int n) {
    return n - 2;
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d %d", fibo(n), fibonacci(n));
    return 0;
}