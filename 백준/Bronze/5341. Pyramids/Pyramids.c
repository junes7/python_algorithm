#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n, s;
    while (true) {
        scanf("%d", &n);
        if (n == 0) break;
        s = 0;
        for (int i = 1; i < n + 1; i++)
            s += i;
        printf("%d\n", s);
    }
    return 0;
}