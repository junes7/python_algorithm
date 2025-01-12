#include <stdio.h>

int main(void) {
    int n, m, i, j, k;
    scanf("%d %d",&n,&m);
    int num[n];
    memset(num,0,sizeof(int)*n);
    for (int l = 0; l < m; l++) {
        scanf("%d %d %d",&i,&j,&k);
        for (int o = i; o < j + 1; o++) {
            num[o - 1] = k;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",num[i]);
    }
    return 0;
}