#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user {
    char name[11];
    int scr;
};
int cmp(const void *pa, const void *pb) {
    struct user a = *(struct user *)pa;
    struct user b = *(struct user *)pb;
    if (a.scr == b.scr) return strcmp(a.name, b.name);
    return b.scr - a.scr;
}
int main(void) {
    int n;
    scanf("%d", &n);
    struct user *arr = (struct user *)malloc(sizeof(struct user) * n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", arr[i].name, &arr[i].scr);
    }
    qsort(arr, n, sizeof(struct user), cmp);
    printf("%s", arr[0].name);
    return 0;
}