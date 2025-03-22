#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int e1, e2;
    int *t = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; i++) {
        scanf("%d %d", &e1, &e2);
        t[i] = 3 * e1 + 1 * e2;
    }
    if (t[0] == t[1])
        printf("NO SCORE");
    else if (t[0] > t[1])
        printf("%d %d", 1, t[0] - t[1]);
    else
        printf("%d %d", 2, t[1] - t[0]);
    return 0;
}