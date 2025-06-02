#include <stdio.h>
int main(void) {
    int n, total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++) {
        for (int j = i; j < n + 1; j++) {
            total += i + j;
        }
    }
    printf("%d", total);
    return 0;
}