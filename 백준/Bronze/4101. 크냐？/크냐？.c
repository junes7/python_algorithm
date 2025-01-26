#include <stdio.h>

int main(void) {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a + b == 0)
            break;
        printf("%s\n", a > b ? "Yes" : "No");
    }
    return 0;
}