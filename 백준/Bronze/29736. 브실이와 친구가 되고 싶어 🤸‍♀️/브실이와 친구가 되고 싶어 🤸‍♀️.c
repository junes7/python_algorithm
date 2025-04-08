#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a, b, k, x, cnt = 0;
    char *cnt_st = (char *)malloc(sizeof(char) * 5);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &k, &x);
    for (int i = k - x; i < k + x + 1; i++) {
        if (a <= i && i <= b)
            cnt += 1;
    }
    sprintf(cnt_st, "%d", cnt);
    printf("%s", cnt > 0 ? cnt_st : "IMPOSSIBLE");
    return 0;
}