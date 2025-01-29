#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    if (a[1] == b[1]) return a[0] - b[0];
    return a[1] - b[1];
}
int main(void) {
    int n, cnt = 1;
    long start, end;
    scanf("%d", &n);
    int **time = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        scanf("%ld %ld", &start, &end);
        time[i] = (int *)malloc(sizeof(int) * 2);
        time[i][0] = start;
        time[i][1] = end;
    }
    qsort(time, n, sizeof(int *), compare);
    start = time[0][0], end = time[0][1];
    for (int i = 1; i < n; i++) {
        if (end <= time[i][0]) {
            start = time[i][0];
            end = time[i][1];
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}