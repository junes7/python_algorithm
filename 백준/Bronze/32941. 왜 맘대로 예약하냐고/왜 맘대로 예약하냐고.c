#include <stdio.h>
int main(void) {
    int T, X, N, K, elem, cnt = 0;
    scanf("%d %d", &T, &X);
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &K);
        for (int j = 0; j < K; j++) {
            scanf("%d", &elem);
            if (elem == X) {
                cnt += 1;
            }
        }
    }
    printf("%s", cnt == N ? "YES" : "NO");
    return 0;
}