#include <stdio.h>
int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%s", (m * n) % 3 == 0 ? "YES" : "NO");
    return 0;
}