#include <stdio.h>
int main(void) {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 2; i < n - 1; i = i + 2) {
        s += (n - i - 2) / 2;
    }
    printf("%d", s);
    return 0;
}