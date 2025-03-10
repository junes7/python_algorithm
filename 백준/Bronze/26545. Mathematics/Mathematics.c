#include <stdio.h>
int main(void) {
    int n, elem, s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        s += elem;
    }
    printf("%d", s);
    return 0;
}