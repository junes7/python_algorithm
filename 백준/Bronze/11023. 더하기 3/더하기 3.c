#include <stdio.h>
int main(void) {
    int elem, s = 0;
    while (scanf("%d", &elem) != EOF)
        s += elem;
    printf("%d", s);
    return 0;
}