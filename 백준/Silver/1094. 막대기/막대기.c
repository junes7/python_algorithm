#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int x, cnt = 0, *stick;
    scanf("%d", &x);
    stick = (int*)malloc(sizeof(int) * 7);
    for (int i = 0; i < 7; i++) {
        stick[i] = pow(2, (6 - i));
        if (x > 0 && x >= stick[i]) {
            x -= stick[i];
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}