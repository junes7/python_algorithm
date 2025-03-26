#include <stdio.h>
int main(void) {
    int N, M, elem, s;
    while (scanf("%d %d", &N, &M) != EOF) {
        if (N == 0 && M == 0) break;
        s = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &elem);
            s += elem >= M / N ? M / N : elem;
        }
        printf("%d\n", s);
    }
    return 0;
}