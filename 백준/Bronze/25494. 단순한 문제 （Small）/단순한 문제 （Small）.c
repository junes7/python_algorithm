#include <stdio.h>
int main(void) {
    int T, a, b, c, cnt;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &a, &b, &c);
        cnt = 0;
        for (int x = 0; x < a; x++) {
            for (int y = 0; y < b; y++) {
                for (int z = 0; z < c; z++) {
                    if ((x + 1) % (y + 1) == (y + 1) % (z + 1) && (y + 1) % (z + 1) == (z + 1) % (x + 1))
                        cnt += 1;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}