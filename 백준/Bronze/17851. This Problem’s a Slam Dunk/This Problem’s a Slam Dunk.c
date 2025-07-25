#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pa, const void *pb) {
    const int a = *(int *)pa;
    const int b = *(int *)pb;
    return a - b;
}
int main(void) {
    int rlt = 0, *team1, *team2;
    team1 = (int *)malloc(sizeof(int) * 5);
    team2 = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
        scanf("%d", &team1[i]);
    for (int i = 0; i < 5; i++)
        scanf("%d", &team2[i]);
    qsort(team1, 5, sizeof(int), cmp);
    qsort(team2, 5, sizeof(int), cmp);
    for (int i = 0; i < 5; i++)
        if (team1[i] > team2[i])
            rlt += 1;
    printf("%d", rlt);
    return 0;
}