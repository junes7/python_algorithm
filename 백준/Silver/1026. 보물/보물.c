#include <stdio.h>
#include <stdlib.h>
int compare1(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int compare2(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return b - a;
}
int main(void) {
    int n, elem, s = 0;
    scanf("%d", &n);
    int *alist = (int *)malloc(sizeof(int) * n);
    int *blist = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        alist[i] = elem;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        blist[i] = elem;
    }
    qsort(alist, n, sizeof(int), compare1);
    qsort(blist, n, sizeof(int), compare2);
    for (int i = 0; i < n; i++)
        s += alist[i] * blist[i];
    printf("%d", s);
    return 0;
}