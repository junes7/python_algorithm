#include <stdio.h>
int main(void) {
    int t, n, d;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &d);
        n = d % 100;
        printf("%s\n", (d + 1) % n == 0 ? "Good" : "Bye");
    }
    return 0;
}