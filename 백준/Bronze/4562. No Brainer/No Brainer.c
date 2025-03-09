#include <stdio.h>
int main(void) {
    int n, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        printf("%s\n", x < y ? "NO BRAINS" : "MMM BRAINS");
    }
    return 0;
}