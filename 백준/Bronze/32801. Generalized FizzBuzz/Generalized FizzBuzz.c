#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int n, a, b, *rlt = (int*)malloc(sizeof(int) * 3);
    memset(rlt, 0, sizeof(int) * 3);
    scanf("%d %d %d", &n, &a, &b);
    for (int i = 1; i < n + 1; i++) {
        if (i % a == 0) {
            if (i % b != 0)
                rlt[0] += 1;
            else
                rlt[2] += 1;
        } else if (i % b == 0)
            rlt[1] += 1;
    }
    for (int i = 0; i < 3; i++)
        printf("%d ", rlt[i]);
    return 0;
}