#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int n, m, idx = 0, start, end, mid;
    scanf("%d %d", &n, &m);
    char **hloss = (char **)malloc(sizeof(char *) * 500000);
    char **interloss = (char **)malloc(sizeof(char *) * 500000);
    char *ch = (char *)malloc(sizeof(char) * 20);
    for (int i = 0; i < n; i++) {
        hloss[i] = (char *)malloc(sizeof(char) * 20);
        scanf("%s", hloss[i]);
    }
    qsort(hloss, n, sizeof(char *), compare);
    for (int i = 0; i < m; i++) {
        scanf("%s", ch);
        start = 0, end = n - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (strcmp(hloss[mid], ch) == 0) {
                interloss[idx] = (char *)malloc(sizeof(char) * 20);
                strcpy(interloss[idx++], ch);
                break;
            } else if (strcmp(hloss[mid], ch) > 0) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    printf("%d\n", idx);
    qsort(interloss, idx, sizeof(char *), compare);
    for (int i = 0; i < idx; i++) {
        printf("%s\n", interloss[i]);
    }
    return 0;
}