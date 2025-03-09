#include <stdio.h>
int main(void) {
    int n, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        printf(num % 2 == 0 ? "%d is even\n" : "%d is odd\n", num);
    }
    return 0;
}