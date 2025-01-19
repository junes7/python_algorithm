#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}
int main(void) {
    int n, k, elem, *num = (int *)malloc(sizeof(int) * 1000);
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        num[i] = elem;
    }
    qsort(num, n, sizeof(int), compare);
    printf("%d", num[k - 1]);
    return 0;
}