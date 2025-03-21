#include <stdio.h>
int main(void) {
    int T, N, A, D, s;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        s = 0;
        scanf("%d %d %d", &N, &A, &D);
        for (int j = 0; j < N; j++)
            s += A + D * j;
        printf("%d\n", s);
    }
    return 0;
}