#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, elem, best = 0;
    scanf("%d", &n);
    int *ropes = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        ropes[i] = elem;
    }
    qsort(ropes, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        if (best < ropes[i] * (n - i))
            best = ropes[i] * (n - i);
    }
    printf("%d", best);
    return 0;
}