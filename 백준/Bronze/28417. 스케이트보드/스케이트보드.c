#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a < b;
}
int main(void) {
    int t, maxr, elem, rlt = 0, *trick;
    scanf("%d", &t);
    trick = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < t; i++) {
        maxr = 0;
        for (int j = 0; j < 2; j++) {
            scanf("%d", &elem);
            if (maxr < elem)
                maxr = elem;
        }
        for (int j = 0; j < 5; j++) {
            scanf("%d", &trick[j]);
        }
        qsort(trick, 5, sizeof(int), cmp);
        rlt = rlt > maxr + trick[0] + trick[1] ? rlt : maxr + trick[0] + trick[1];
    }
    printf("%d", rlt);
    return 0;
}