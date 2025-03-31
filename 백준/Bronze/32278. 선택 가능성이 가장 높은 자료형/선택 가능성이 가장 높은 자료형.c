#include <math.h>
#include <stdio.h>
int main(void) {
    long long n;
    scanf("%lld", &n);
    if (-pow(2, 15) <= n && n < pow(2, 15)) {
        printf("short");
    } else if (-pow(2, 31) <= n && n < pow(2, 31)) {
        printf("int");
    } else {
        printf("long long");
    }
    return 0;
}