#include <math.h>
#include <stdio.h>
int main(void) {
    int n, s = 0, m = 0;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        s += i;
        m += pow(i, 3);
    }
    printf("%d\n%d\n%d", s, (int)pow(s, 2), m);
    return 0;
}