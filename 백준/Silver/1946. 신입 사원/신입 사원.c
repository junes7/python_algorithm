#include <stdio.h>
#include <stdlib.h>
int compare(const void *pa, const void *pb) {
    const int *a = *(int **)pa;
    const int *b = *(int **)pb;
    return a[0] > b[0];
}
int main(void) {
    int t, n, cnt, cutline, **applicants;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        applicants = (int **)malloc(sizeof(int *) * n);
        for (int j = 0; j < n; j++) {
            scanf("%d %d", &cnt, &cutline);
            applicants[j] = (int *)malloc(sizeof(int) * 2);
            applicants[j][0] = cnt;
            applicants[j][1] = cutline;
        }
        qsort(applicants, n, sizeof(int *), compare);
        cnt = 1;
        cutline = applicants[0][1];
        for (int j = 1; j < n; j++) {
            if (cutline > applicants[j][1]) {
                cutline = applicants[j][1];
                cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}