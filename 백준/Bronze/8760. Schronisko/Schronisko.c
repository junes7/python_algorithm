#include <stdio.h>
int main(void) {
    int Z, W, K;
    scanf("%d", &Z);
    for (int i = 0; i < Z; i++) {
        scanf("%d %d", &W, &K);
        printf("%d\n", W * K / 2);
    }
    return 0;
}