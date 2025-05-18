#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, m, maxh = 0, maxv = 0, *helmets, *vests;
    scanf("%d %d", &n, &m);
    helmets = (int*)malloc(sizeof(int) * n);
    vests = (int*)malloc(sizeof(int) * m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &helmets[i]);
        if (maxh < helmets[i]) maxh = helmets[i];
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &vests[i]);
        if (maxv < vests[i]) maxv = vests[i];
    }
    printf("%d", maxh + maxv);
    return 0;
}