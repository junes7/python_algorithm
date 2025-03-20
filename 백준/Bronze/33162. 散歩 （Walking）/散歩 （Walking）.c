#include <stdio.h>
int main(void) {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        s = i % 2 == 0 ? s + 3 : s - 2;
    printf("%d", s);
    return 0;
}