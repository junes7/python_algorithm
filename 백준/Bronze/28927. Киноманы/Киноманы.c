#include <stdio.h>
int main(void) {
    int t1, e1, f1, t2, e2, f2, max_t, mel_t;
    scanf("%d %d %d", &t1, &e1, &f1);
    scanf("%d %d %d", &t2, &e2, &f2);
    max_t = t1 * 3 + e1 * 20 + f1 * 120;
    mel_t = t2 * 3 + e2 * 20 + f2 * 120;
    printf("%s", max_t == mel_t ? "Draw" : max_t > mel_t ? "Max" : "Mel");
    return 0;
}