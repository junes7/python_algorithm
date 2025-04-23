#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int off, on, *total = (int*)malloc(sizeof(int) * 4), maxn = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &off, &on);
        total[i] = (i == 0 ? 0 : total[i - 1]) - off + on;
        if (maxn < total[i]) maxn = total[i];
    }
    printf("%d", maxn);
    return 0;
}