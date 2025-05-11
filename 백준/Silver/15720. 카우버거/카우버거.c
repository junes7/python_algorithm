#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a < b;
}
int main(void) {
    int b, c, d, min_val, rlt = 0, total = 0, *burgers, *sides, *drinks;
    scanf("%d %d %d", &b, &c, &d);
    burgers = (int *)malloc(sizeof(int) * b);
    sides = (int *)malloc(sizeof(int) * c);
    drinks = (int *)malloc(sizeof(int) * d);
    for (int i = 0; i < b; i++) {
        scanf("%d", &burgers[i]);
        total += burgers[i];
    }
    for (int i = 0; i < c; i++) {
        scanf("%d", &sides[i]);
        total += sides[i];
    }
    for (int i = 0; i < d; i++) {
        scanf("%d", &drinks[i]);
        total += drinks[i];
    }
    qsort(burgers, b, sizeof(int), cmp);
    qsort(sides, c, sizeof(int), cmp);
    qsort(drinks, d, sizeof(int), cmp);
    min_val = b < c ? (b < d ? b : d) : (c < d ? c : d);
    for (int i = 0; i < min_val; i++)
        rlt += (burgers[i] + sides[i] + drinks[i]) * 0.9;
    for (int i = min_val; i < b; i++)
        rlt += burgers[i];
    for (int i = min_val; i < c; i++)
        rlt += sides[i];
    for (int i = min_val; i < d; i++)
        rlt += drinks[i];
    printf("%d\n%d", total, rlt);
    return 0;
}