#include <stdio.h>
#include <stdlib.h>
struct date {
    char name[16];
    int y, m, d;
};
int cmp(const void *pa, const void *pb) {
    struct date v1 = *(struct date *)pa;
    struct date v2 = *(struct date *)pb;
    if (v1.y == v2.y && v1.m == v2.m && v1.d == v2.d) return v1.name > v2.name;
    if (v1.y == v2.y && v1.m == v2.m) return v1.d > v2.d;
    if (v1.y == v2.y) return v1.m > v2.m;
    return v1.y > v2.y;
}
int main(void) {
    int n;
    scanf("%d", &n);
    struct date *rec = (struct date *)malloc(sizeof(struct date) * n);
    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", rec[i].name, &rec[i].d, &rec[i].m, &rec[i].y);
    qsort(rec, n, sizeof(struct date), cmp);
    printf("%s\n%s", rec[n - 1].name, rec[0].name);
    return 0;
}