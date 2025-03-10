#include <stdio.h>
int main(void) {
    int n, elem;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        printf("%d %d\n", elem, elem);
    }
    return 0;
}