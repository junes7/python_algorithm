#include <stdio.h>
int main(void) {
    int k;
    scanf("%d", &k);
    for (int i = 1; i < k + 1; i++) {
        if (1 + i + i * i == k) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}