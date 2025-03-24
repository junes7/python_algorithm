#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *a = (int *)malloc(sizeof(int) * 3);
    int *c = (int *)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 3; i++)
        scanf("%d", &c[i]);
    printf("%d %d %d", c[0] - a[2], c[1] / a[1], c[2] - a[0]);
    return 0;
}