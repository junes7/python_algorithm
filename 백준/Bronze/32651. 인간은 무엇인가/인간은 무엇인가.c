#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%s", n <= 100000 && n % 2024 == 0 ? "Yes" : "No");
    return 0;
}