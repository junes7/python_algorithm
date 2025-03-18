#include <stdio.h>
int main(void) {
    int n, s = 0, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        s += elem;
    }
    printf("%d", s);
    return 0;
}