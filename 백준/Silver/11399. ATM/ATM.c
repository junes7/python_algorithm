#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int main(void) {
    int n, elem, s;
    scanf("%d", &n);
    int *time = (int *)malloc(sizeof(int) * n);
    int *times = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &elem);
        time[i] = elem;
    }
    qsort(time, n, sizeof(int), compare);
    for (int i = 1; i < n + 1; i++) {
        s = 0;
        for (int j = 0; j < i; j++)
            s += time[j];
        times[i - 1] = s;
    }
    s = 0;
    for (int i = 0; i < n; i++)
        s += times[i];
    printf("%d", s);
}