#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n, a, b, preva = 0, prevb = 0;
    bool flag = true;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (preva > a || prevb > b) {
            flag = false;
            break;
        }
        preva = a, prevb = b;
    }
    printf("%s", flag ? "yes" : "no");
    return 0;
}