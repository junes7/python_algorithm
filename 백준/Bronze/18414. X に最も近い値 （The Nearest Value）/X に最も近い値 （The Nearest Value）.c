#include <math.h>
#include <stdio.h>
int main(void) {
    int x, l, r, minn, idx;
    scanf("%d %d %d", &x, &l, &r);
    minn = abs(x - l);
    idx = l;
    for (int i = l + 1; i < r + 1; i++) {
        if (minn > abs(x - i)) {
            minn = abs(x - i);
            idx = i;
        }
    }
    printf("%d", idx);
    return 0;
}