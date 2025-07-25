#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int *tri1 = (int *)malloc(sizeof(int) * 3);
    int *tri2 = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        scanf("%d", &tri1[i]);
    for (int i = 0; i < 3; i++)
        scanf("%d", &tri2[i]);
    qsort(tri1, 3, sizeof(int), cmp);
    qsort(tri2, 3, sizeof(int), cmp);
    printf("%s", tri1[0] * tri2[0] + tri1[1] * tri2[1] == tri1[2] * tri2[2] ? "YES" : "NO");
    return 0;
}