#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int n, m, elem, cnt = 0, start, end, mid, *a = (int *)malloc(sizeof(int) * 200001);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        a[i] = elem;
    }
    qsort(a, n, sizeof(int), compare);
    for (int i = 0; i < m; i++) {
        scanf("%d", &elem);
        start = 0, end = n - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (a[mid] == elem) {
                cnt += 1;
                break;
            } else if (a[mid] > elem) {
                end = mid - 1;
            } else {  // a[mid]<elem
                start = mid + 1;
            }
        }
    }
    printf("%d", (n - cnt) + (m - cnt));
    return 0;
}