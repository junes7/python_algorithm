#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int tot = 0, n, idx, maxn = 0, *cnt;
    cnt = (int*)malloc(sizeof(int) * 1000);
    memset(cnt, 0, sizeof(int) * 1000);
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        tot += n;
        cnt[n] += 1;
    }
    for (int i = 1; i < 1001; i++) {
        if (maxn < cnt[i]) {
            maxn = cnt[i];
            idx = i;
        }
    }
    printf("%d\n%d", tot / 10, idx);
    return 0;
}