#include <stdio.h>
int main(void) {
    int N, M, K, x, y;
    scanf("%d %d %d", &N, &M, &K);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (M * i + j == K) {
                x = i, y = j;
            }
        }
    }
    printf("%d %d", x, y);
    return 0;
}