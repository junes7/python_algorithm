#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
int main(void) {
    int n, elem, *num = (int *)malloc(sizeof(int) * 1000);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        num[i] = elem;
    }
    qsort(num, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}