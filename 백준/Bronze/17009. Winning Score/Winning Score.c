#include <stdio.h>
int main(void) {
    int sA = 0, sB = 0, elem;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &elem);
        sA += elem * (3 - i);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%d", &elem);
        sB += elem * (3 - i);
    }
    printf("%s", sA == sB ? "T" : (sA > sB ? "A" : "B"));
    return 0;
}