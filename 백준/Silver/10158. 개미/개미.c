#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t, *lng, *quo, *mark, *rlt;
    lng = (int*)malloc(sizeof(int) * 2);
    quo = (int*)malloc(sizeof(int) * 2);
    mark = (int*)malloc(sizeof(int) * 2);
    rlt = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; i++)
        scanf("%d", &lng[i]);
    for (int i = 0; i < 2; i++)
        scanf("%d", &mark[i]);
    scanf("%d", &t);
    for (int i = 0; i < 2; i++) {
        if ((mark[i] + t) / lng[i] % 2 == 0)
            rlt[i] = (mark[i] + t) % lng[i];
        else
            rlt[i] = lng[i] - (mark[i] + t) % lng[i];
    }
    for (int i = 0; i < 2; i++)
        printf("%d ", rlt[i]);
    return 0;
}