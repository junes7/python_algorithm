#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const long long a = *(long long *)pa;
    const long long b = *(long long *)pb;
    return a < b;
}
int main(void) {
    int t, len;
    long long total, m, *arr;
    char *st = (char *)malloc(sizeof(char) * 17);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", st);
        len = strlen(st), m = 1, total = 0;
        arr = (long long *)malloc(sizeof(long long) * len);
        for (int i = 0; i < len; i++)
            arr[i] = st[i] - 48;
        qsort(arr, len, sizeof(long long), cmp);
        for (int i = len - 2; i >= 0; i--) {
            total += arr[i] * m;
            m *= 10;
        }
        printf("%lld\n", total + arr[len - 1]);
    }
    return 0;
}