#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int elem, pieces[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++) {
        scanf("%d", &elem);
        pieces[i] -= elem;
        printf("%d ", pieces[i]);
    }
    return 0;
}