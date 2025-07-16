#include <stdio.h>
#include <stdlib.h>
struct team {
    int cnt;
    char ch;
};
int cmp1(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a > b;
}
int cmp2(const void *pa, const void *pb) {
    const struct team a = *(struct team *)pa;
    const struct team b = *(struct team *)pb;
    return b.cnt - a.cnt;
}
int main(void) {
    char *name = (char *)malloc(sizeof(char) * 6);
    int abbrev = 0, m = 1, idx = 0, *yr = (int *)malloc(sizeof(int) * 3);
    struct team *arr = (struct team *)malloc(sizeof(struct team) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %s", &arr[i].cnt, &yr[i], name);
        yr[i] = yr[i] % 100;
        arr[i].ch = name[0];
    }
    qsort(yr, 3, sizeof(int), cmp1);
    qsort(arr, 3, sizeof(struct team), cmp2);
    for (int i = 0; i < 3; i++) {
        abbrev += yr[2 - i] * m;
        m *= 100;
        name[idx++] = arr[i].ch;
    }
    name[idx] = '\0';
    printf("%d\n%s", abbrev, name);
    return 0;
}