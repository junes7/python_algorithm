#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    char st[4] = "UOS";
    printf("%c", st[(n - 1) % 3]);
    return 0;
}