#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, *trees, *lmn, maxn = 0;
    scanf("%d", &n);
    trees = (int*)malloc(sizeof(int) * n);
    lmn = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &trees[i]);
        lmn[i] = trees[i] - (n - i);
        if (maxn < lmn[i])
            maxn = lmn[i];
    }
    printf("%d", maxn);
    return 0;
}