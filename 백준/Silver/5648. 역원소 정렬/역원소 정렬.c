#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *pa, const void *pb) {
    const long long a = *(long long *)pa;
    const long long b = *(long long *)pb;
    return a > b;
}
int main(void) {
    int n, len;
    char ch, *st = (char *)malloc(sizeof(char) * 14);
    scanf("%d", &n);
    long long *arr = (long long *)malloc(sizeof(long long) * n);
    for (int i = 0; i < n; i++) {
        scanf("%s", st);
        len = strlen(st);
        for (int i = 0; i < len / 2; i++) {
            ch = st[i];
            st[i] = st[len - 1 - i];
            st[len - 1 - i] = ch;
        }
        arr[i] = atoll(st);
    }
    qsort(arr, n, sizeof(long long), cmp);
    for (int i = 0; i < n; i++)
        printf("%lld\n", arr[i]);
    return 0;
}