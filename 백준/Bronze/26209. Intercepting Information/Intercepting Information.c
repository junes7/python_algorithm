#include <stdio.h>
int main(void) {
    int elem;
    char status = 'S';
    for (int i = 0; i < 8; i++) {
        scanf("%d", &elem);
        if (elem == 9) {
            status = 'F';
            break;
        }
    }
    printf("%c", status);
    return 0;
}