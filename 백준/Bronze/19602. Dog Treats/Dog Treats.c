#include <stdio.h>
int main(void) {
    int S, M, L;
    scanf("%d", &S);
    scanf("%d", &M);
    scanf("%d", &L);
    printf("%s", 1 * S + 2 * M + 3 * L >= 10 ? "happy" : "sad");
    return 0;
}