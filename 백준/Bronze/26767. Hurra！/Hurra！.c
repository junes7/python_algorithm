#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        if (i % 7 == 0 && i % 11 != 0)
            printf("%s\n", "Hurra!");
        else if (i % 7 != 0 && i % 11 == 0)
            printf("%s\n", "Super!");
        else if (i % 7 == 0 && i % 11 == 0)
            printf("%s\n", "Wiwat!");
        else
            printf("%d\n", i);
    }
    return 0;
}