#include <stdio.h>
int main(void) {
    int t, k, y, tot_k, tot_y;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        tot_k = 0, tot_y = 0;
        for (int j = 0; j < 9; j++) {
            scanf("%d %d", &y, &k);
            tot_y += y;
            tot_k += k;
        }
        printf("%s\n", tot_k == tot_y ? "Draw" : (tot_y > tot_k ? "Yonsei" : "Korea"));
    }
    return 0;
}