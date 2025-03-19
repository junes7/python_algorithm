#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, s = 0, x, y;
    scanf("%d", &n);
    int isTrain[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &isTrain[i]);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (isTrain[i])
            s += y > x ? y - x : 0;
        else
            s += 0;
    }
    printf("%d", s);
    return 0;
}