#include <stdio.h>
int main(void) {
    int total, s = 0, elem;
    scanf("%d", &total);
    for (int i = 0; i < 9; i++) {
        scanf("%d", &elem);
        s += elem;
    }
    printf("%d", total - s);
    return 0;
}