#include <stdio.h>
int main(void) {
    int s = 0, elem;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &elem);
        s += elem;
    }
    printf("%d\n", s / 60);
    printf("%d", s % 60);
    return 0;
}