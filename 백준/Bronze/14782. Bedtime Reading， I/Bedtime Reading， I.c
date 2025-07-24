#include <stdio.h>
int main(void) {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        if (n % i == 0)
            s += i;
    }
    printf("%d", s);
    return 0;
}