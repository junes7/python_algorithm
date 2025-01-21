#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *pa, const void *pb) {
    const char *a = *(char **)pa;
    const char *b = *(char **)pb;
    return strcmp(a, b);
}
int main(void) {
    int n, m, start, end, mid, cnt = 0;
    char *ch = (char *)malloc(sizeof(char) * 500);
    scanf("%d %d", &n, &m);
    char **s = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        scanf("%s", ch);
        s[i] = (char *)malloc(sizeof(char) * strlen(ch));
        strcpy(s[i], ch);
    }
    qsort(s, n, sizeof(char *), compare);
    for (int i = 0; i < m; i++) {
        scanf("%s", ch);
        start = 0, end = n - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (strcmp(s[mid], ch) == 0) {
                cnt += 1;
                break;
            } else if (strcmp(s[mid], ch) > 0) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}