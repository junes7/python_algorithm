#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int binary_search(int s, int e, int *nb1, int num) {
    int mid;
    while (s <= e) {
        mid = (s + e) / 2;
        if (nb1[mid] == num)
            return 1;
        else {
            if (nb1[mid] < num)
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return 0;
}
int main(void) {
    int k, n, m, *nb1, *nb2;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &n);
        nb1 = (int *)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
            scanf("%d", &nb1[j]);
        qsort(nb1, n, sizeof(int), compare);
        scanf("%d", &m);
        nb2 = (int *)malloc(sizeof(int) * m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &nb2[j]);
            printf("%d\n", binary_search(0, n - 1, nb1, nb2[j]));
        }
    }
    return 0;
}