#include <stdio.h>
int main(void) {
    int S1, S2;
    scanf("%d %d", &S1, &S2);
    printf("%s", S1 >= S2 / 2.0 ? "E" : "H");
    return 0;
}