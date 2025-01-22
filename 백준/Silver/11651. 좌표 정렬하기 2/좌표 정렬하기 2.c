#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[1] == b[1]) return a[0] > b[0];
    return a[1] > b[1];
}
int main(void) {
    int n, **num = (int **)malloc(sizeof(int *) * 100000);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        num[i] = (int *)malloc(sizeof(int) * 2);
        scanf("%d %d", &num[i][0], &num[i][1]);
    }
    qsort(num, n, sizeof(int *), compare);
    for (int i = 0; i < n; i++)
        printf("%d %d\n", num[i][0], num[i][1]);
    return 0;
}