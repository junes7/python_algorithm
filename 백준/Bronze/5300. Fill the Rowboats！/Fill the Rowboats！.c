#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        printf("%d ", i);
        if (i % 6 == 0 || i == n)
            printf("%s ", "Go!");
    }
    return 0;
}