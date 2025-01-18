#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    long long n, num;
    bool flag;
    scanf("%lld", &n);
    for (long long i = 0; i < n; i++) {
        flag = false;
        scanf("%lld", &num);
        if (num < 2) {
            printf("%d\n", 2);
        } else {
            while (1) {
                if (flag) {
                    printf("%lld\n", num);
                    break;
                }
                flag = true;
                for (long long j = 2; j < (long long)sqrt(num) + 1; j++) {
                    if (num % j == 0) {
                        flag = false;
                        num += 1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}