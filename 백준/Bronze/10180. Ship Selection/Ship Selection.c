#include <stdio.h>
int main(void) {
    int T, N, D, v, f, c, cnt;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N, &D);
        cnt = 0;
        for (int j = 0; j < N; j++) {
            scanf("%d %d %d", &v, &f, &c);
            if (v * f / c >= D)
                cnt += 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}