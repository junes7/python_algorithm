#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int s1 = 0, s2 = 0;
    int *t1 = (int *)malloc(sizeof(int) * 3);
    int *t2 = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        scanf("%d", &t1[i]);
        s1 += t1[i] * (i + 1);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%d", &t2[i]);
        s2 += t2[i] * (i + 1);
    }
    printf("%d", s1 == s2 ? 0 : (s1 > s2 ? 1 : 2));
    return 0;
}