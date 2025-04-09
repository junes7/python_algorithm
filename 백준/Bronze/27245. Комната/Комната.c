#include <stdio.h>
int main(void) {
    int w, l, h, minn, maxn;
    scanf("%d", &w);
    scanf("%d", &l);
    scanf("%d", &h);
    minn = w < l ? w : l;
    maxn = w < l ? l : w;
    printf("%s", minn / h >= 2 && maxn / minn <= 2 ? "good" : "bad");
    return 0;
}