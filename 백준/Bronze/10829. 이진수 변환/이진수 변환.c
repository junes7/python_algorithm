#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n, idx = 0;
    char ch, *rlt = (char*)malloc(sizeof(char) * 1000);
    scanf("%lld", &n);
    while (n > 0) {
        rlt[idx++] = n % 2 + 48;
        n /= 2;
    }
    for (int i = 0; i < idx / 2; i++) {
        ch = rlt[i];
        rlt[i] = rlt[idx - 1 - i];
        rlt[idx - 1 - i] = ch;
    }
    printf("%s", rlt);
    return 0;
}