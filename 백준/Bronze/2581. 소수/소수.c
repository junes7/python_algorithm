#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int n, end, idx = 0, s = 0;
    bool flag;
    scanf("%d", &n);
    scanf("%d", &end);
    int primeNum[10000];
    if (n == 1) n += 1;
    while (n <= end) {
        flag = true;
        for (int i = 2; i < (int)sqrt(n) + 1; i++) {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag)
            primeNum[idx++] = n;
        n += 1;
    }
    if (idx == 0)
        printf("%d", -1);
    else {
        for (int i = 0; i < idx; i++)
            s += primeNum[i];
        printf("%d\n%d", s, primeNum[0]);
    }
    return 0;
}