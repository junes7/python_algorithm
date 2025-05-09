#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    int len1, len2, total1 = 0, total2 = 0;
    const char *s1 = *(char **)pa;
    const char *s2 = *(char **)pb;
    len1 = strlen(s1);
    len2 = strlen(s2);
    for (int i = 0; i < len1; i++) {
        if (isdigit(s1[i]))
            total1 += s1[i] - 48;
    }
    for (int i = 0; i < len2; i++) {
        if (isdigit(s2[i]))
            total2 += s2[i] - 48;
    }
    if (len1 == len2 && total1 == total2) return strcmp(s1, s2);
    if (len1 == len2) return total1 > total2;
    return len1 > len2;
}
int main(void) {
    int n;
    scanf("%d", &n);
    char **arr = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(sizeof(char) * 51);
        scanf("%s", arr[i]);
    }
    qsort(arr, n, sizeof(char *), cmp);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    return 0;
}