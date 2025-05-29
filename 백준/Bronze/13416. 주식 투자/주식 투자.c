#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, n, get_max, maxn, *get = (int*)malloc(sizeof(int) * 3);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        get_max = 0;
        for (int j = 0; j < n; j++) {
            maxn = 0;
            for (int k = 0; k < 3; k++) {
                scanf("%d", &get[k]);
                if (maxn < get[k])
                    maxn = get[k];
            }
            get_max += maxn;
        }
        printf("%d\n", get_max);
    }
    return 0;
}